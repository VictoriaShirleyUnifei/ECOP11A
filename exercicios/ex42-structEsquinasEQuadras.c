#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX_RUAS 100
#define MAX_ESQUINAS 100
#define MAX_NOME_RUA 50

typedef struct
{
    int id;
    float x;
    float y;
} Esquina;

typedef struct
{
    char nome[MAX_NOME_RUA];
    int esquina1;
    int esquina2;
} Quadra;

// Função para calcular a distância Euclidiana
float calcularDistancia(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Função para substituir o caractere '_' por espaço ' '
void substituirUnderscorePorEspaco(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '_')
        {
            str[i] = ' ';
        }
    }
}

int main()
{
    Esquina esquinas[MAX_ESQUINAS];
    Quadra quadras[MAX_RUAS];
    int numEsquinas = 0, numQuadras = 0;

    FILE *arquivo = fopen("ex42-cidade.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    char linha[100];
    int lendoEsquinas = 1; // Flag para indicar se estamos lendo as esquinas ou quadras

    // Leitura do arquivo de entrada
    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        if (linha[0] == '#')
        {
            // Ignorar comentários no arquivo
            continue;
        }

        if (lendoEsquinas)
        {
            int id;
            float x, y;
            if (sscanf(linha, "%d %f %f", &id, &x, &y) == 3)
            {
                // Adicionar esquina ao array de esquinas
                esquinas[numEsquinas].id = id;
                esquinas[numEsquinas].x = x;
                esquinas[numEsquinas].y = y;
                numEsquinas++;
            }
            else
            {
                // Passamos para as quadras
                lendoEsquinas = 0;
            }
        }

        if (!lendoEsquinas)
        {
            char nome[MAX_NOME_RUA];
            int e1, e2;
            if (sscanf(linha, "%s %d %d", nome, &e1, &e2) == 3)
            {
                // Adicionar quadra ao array de quadras
                strcpy(quadras[numQuadras].nome, nome);
                quadras[numQuadras].esquina1 = e1;
                quadras[numQuadras].esquina2 = e2;
                numQuadras++;
            }
        }
    }

    fclose(arquivo);

    float x, y;
    printf("Digite a coordenada X em UTM: ");
    scanf("%f", &x);
    printf("Digite a coordenada Y em UTM: ");
    scanf("%f", &y);

    // Encontrar a esquina mais próxima
    int esquinaMaisProxima = -1;
    float menorDistancia = -1;

    for (int i = 0; i < numEsquinas; i++)
    {
        float distancia = calcularDistancia(x, y, esquinas[i].x, esquinas[i].y);
        if (menorDistancia == -1 || distancia < menorDistancia)
        {
            menorDistancia = distancia;
            esquinaMaisProxima = esquinas[i].id;
        }
    }

    // Exibir a esquina mais próxima
    if (esquinaMaisProxima != -1)
    {
        printf("Esquina mais próxima: %d\n", esquinaMaisProxima);
        printf("Ruas conectadas a essa esquina:\n");

        // Listar todas as ruas conectadas à esquina mais próxima
        for (int i = 0; i < numQuadras; i++)
        {
            if (quadras[i].esquina1 == esquinaMaisProxima || quadras[i].esquina2 == esquinaMaisProxima)
            {
                // Substituir underscore por espaço
                substituirUnderscorePorEspaco(quadras[i].nome);
                printf("- %s\n", quadras[i].nome);
            }
        }
    }
    else
    {
        printf("Nenhuma esquina encontrada.\n");
    }

    return 0;
}

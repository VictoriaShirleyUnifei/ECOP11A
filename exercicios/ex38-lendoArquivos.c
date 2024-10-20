#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE *file;
    float num, sum = 0, media = 0, variance = 0, stddev = 0;
    int cont = 0;

    // Abrindo o arquivo para leitura
    file = fopen("ex38-numeros.txt", "r");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // lendo os numeros para contar e calcular a soma
    while (fscanf(file, "%f", &num) != EOF)
    {
        sum += num;
        cont++;
    }

    // Calculando a media
    if (cont > 0)
    {
        media = sum / cont;
    }

    // Reiniciando o ponteiro do arquivo para calcular a variância
    rewind(file);

    // Calculando a variancia (que sera usada para o desvio padrao)
    while (fscanf(file, "%f", &num) != EOF)
    {
        variance += pow(num - media, 2);
    }

    if (cont > 0)
    {
        variance /= cont;
        stddev = sqrt(variance); // Calculando o desvio padrao
    }

    // Fechando o arquivo
    fclose(file);

    // Exibindo os resultados
    printf("Contagem de valores: %d\n", cont);
    printf("Soma: %.2f\n", sum);
    printf("Média: %.2f\n", media);
    printf("Desvio padrão: %.2f\n", stddev);

    return 0;
}

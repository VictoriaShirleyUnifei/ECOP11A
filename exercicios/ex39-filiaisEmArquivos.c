#include <stdio.h>
#include <stdlib.h>

#define NUM_FILIAIS 5

int main()
{
    FILE *file;
    int filial;
    float venda;
    float total_vendas[NUM_FILIAIS] = {0};

    // Abrindo o arquivo
    file = fopen("ex39-filiais.txt", "r");

    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lendo o arquivo e processando as vendas
    while (fscanf(file, "%d,%f", &filial, &venda) != EOF)
    {
        if (filial >= 1 && filial <= NUM_FILIAIS)
        {
            total_vendas[filial - 1] += venda;
        }
    }

    // Fechando o arquivo
    fclose(file);

    // Exibindo o total de vendas de cada filial
    for (int i = 0; i < NUM_FILIAIS; i++)
    {
        printf("Filial %d: %.2f\n", i + 1, total_vendas[i]);
    }

    return 0;
}

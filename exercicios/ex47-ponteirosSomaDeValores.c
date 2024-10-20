#include <stdio.h>

int somar_arrays(int *array1, int tamanho1, int *array2, int tamanho2, int *resultado)
{
    // Verifica se os tamanhos dos arrays são diferentes
    if (tamanho1 != tamanho2)
    {
        return 0; // Arrays de tamanhos diferentes
    }

    // Soma elemento a elemento usando aritmética de ponteiros
    for (int i = 0; i < tamanho1; i++)
    {
        *(resultado + i) = *(array1 + i) + *(array2 + i);
    }

    return 1; // Sucesso
}

int main()
{
    int array1[4], array2[4], resultado[4];

    // Lê o primeiro vetor
    printf("Entre com vetor A: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &array1[i]);
    }

    // Lê o segundo vetor
    printf("Entre com o vetor B: ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &array2[i]);
    }

    // Chama a função para somar os arrays
    int status = somar_arrays(array1, 4, array2, 4, resultado);

    // Exibe o resultado
    if (status)
    {
        printf("Soma: ");
        for (int i = 0; i < 4; i++)
        {
            printf("%d ", resultado[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Os arrays têm tamanhos diferentes.\n");
    }

    return 0;
}

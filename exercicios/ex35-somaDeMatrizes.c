#include <stdio.h>

int main()
{
    // Definindo as matrizes A e B
    int matrA[3][3] = {
        {5, 0, 1},
        {0, 3, 0},
        {2, 0, 2}};

    int matrB[3][3] = {
        {0, 2, 0},
        {9, 4, 1},
        {0, 3, 5}};

    int soma[3][3]; // Matriz para armazenar a soma
    int i, j;

    // Calculando a soma das matrizes
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma[i][j] = matrA[i][j] + matrB[i][j];
        }
    }

    // Imprimindo a matriz soma
    printf("Matriz soma:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}

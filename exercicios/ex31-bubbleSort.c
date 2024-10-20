#include <stdio.h>

int main() 
{
    float numeros[10];
    float temp;
    int i, j;

    // Leitura dos numeros
    printf("Numeros: ");
    for (i = 0; i < 10; i++) 
    {
        scanf("%f", &numeros[i]);
    }

    // Bubble Sort
    for (i = 0; i < 10 - 1; i++) 
    {
        for (j = 0; j < 10 - i - 1; j++) 
        {
            if (numeros[j] > numeros[j + 1]) 
            {
                // Troca os elementos
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Impressao dos numeros ordenados
    printf("Ordenado: ");
    for (i = 0; i < 10; i++) 
    {
        printf("%.0f ", numeros[i]);
    }
    printf("\n");

    return 0;
}

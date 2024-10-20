#include <stdio.h>

int main()
{
    int A;    // Variável original
    int *B;   // Ponteiro para calcular o dobro
    int **C;  // Ponteiro duplo para calcular o triplo
    int ***D; // Ponteiro triplo para calcular o quádruplo

    // Entrada do valor de A
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    // Inicializando os ponteiros
    B = &A; // B aponta para A
    C = &B; // C aponta para B (ponteiro que aponta para A)
    D = &C; // D aponta para C (ponteiro que aponta para B)

    // Cálculos e exibição dos resultados
    printf("Dobro: %d\n", *B * 2);       // Usando B para calcular o dobro
    printf("Triplo: %d\n", **C * 3);     // Usando C para calcular o triplo
    printf("Quadruplo: %d\n", ***D * 4); // Usando D para calcular o quádruplo

    return 0;
}

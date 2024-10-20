#include <stdio.h>

int somaDobro(int *a, int *b) 
{
    int dobroA = *a * 2;
    int dobroB = *b * 2;
    
    *a = dobroA;
    *b = dobroB;

    return dobroA + dobroB;
}

int main() 
{
    int A, B;

    printf("Entre o valor A: ");
    scanf("%d", &A);
    printf("Entre com o valor B: ");
    scanf("%d", &B);

    int resultado = somaDobro(&A, &B);

    printf("Saidas:\n A = %d\n B = %d\n", A, B);

    return 0;
}

#include <stdio.h>

int main()
{
    int a, b;

    // Solicita os números inteiros ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("\n");

    // Realiza e exibe as operações aritméticas
    printf("Soma: %d + %d = %d\n", a, b, a + b);
    printf("Subtração: %d - %d = %d\n", a, b, a - b);
    printf("Multiplicação: %d * %d = %d\n", a, b, a * b);
    printf("Divisão: %d / %d = %d\n", a, b, a / b);
    printf("Módulo: %d %% %d = %d\n", a, b, a % b); // não é reversível

    return 0;
}

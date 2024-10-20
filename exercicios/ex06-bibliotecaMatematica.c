#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;

    // Solicita ao usuário para inserir os valores
    printf("Digite o valor da primeira variável (a): ");
    scanf("%lf", &a);
    printf("Digite o valor da segunda variável (b): ");
    scanf("%lf", &b);

    // Operações avançadas com math.h
    printf("\nOperações com math.h:\n");

    // Potência
    printf("Potência: %lf^%lf = %lf\n", a, b, pow(a, b));

    // Raiz quadrada
    printf("Raiz quadrada de %lf = %lf\n", a, sqrt(a));
    printf("Raiz quadrada de %lf = %lf\n", b, sqrt(b));

    // Funções trigonométricas
    printf("Seno de %lf = %lf\n", a, sin(a));
    printf("Cosseno de %lf = %lf\n", b, cos(b));
    printf("Tangente de %lf = %lf\n", a, tan(a));
    printf("Tangente de %lf = %lf\n", a, tan(a));

    // Funções hiperbólicas
    printf("Seno hiperbólico de %lf = %lf\n", a, sinh(a));
    printf("Cosseno hiperbólico de %lf = %lf\n", b, cosh(b));
    printf("Tangente hiperbólica de %lf = %lf\n", a, tanh(a));

    // Logaritmos
    printf("Logaritmo natural de %lf = %lf\n", a, log(a));
    printf("Logaritmo natural de %lf = %lf\n", b, log(b));
    printf("Logaritmo de base 10 de %lf = %lf\n", a, log10(a));
    printf("Logaritmo de base 10 de %lf = %lf\n", b, log10(b));

    // Exponencial
    printf("Exponencial de %lf = %lf\n", a, exp(a));
    printf("Exponencial de %lf = %lf\n", b, exp(b));

    // Valor absoluto
    printf("Valor absoluto de %lf = %lf\n", a, fabs(a));
    printf("Valor absoluto de %lf = %lf\n", b, fabs(b));

    // Arredondamento
    printf("Arredondamento para o inteiro mais próximo de %lf = %lf\n", a, round(a));
    printf("Arredondamento para o inteiro mais próximo de %lf = %lf\n", b, round(b));

    // Truncamento
    printf("Truncamento de %lf = %lf\n", a, trunc(a));
    printf("Truncamento de %lf = %lf\n", b, trunc(b));

    // Função fmod (resto da divisão de a por b)
    printf("Resto da divisão de %lf por %lf = %lf\n", a, b, fmod(a, b));

    return 0;
}

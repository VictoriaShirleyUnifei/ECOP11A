#include <stdio.h>

int main()
{
    int inteiro;
    float pontoFlutuante;
    double pontoFlutuanteDuplo;
    char caractere;
    char string[100];
    unsigned int inteiroSemSinal;
    long inteiroLongo;
    long long inteiroLongoLongo;

    printf("Digite um valor inteiro: ");
    scanf("%d", &inteiro);
    printf("Você digitou: %d\n", inteiro);

    printf("Digite um valor de ponto flutuante: ");
    scanf("%f", &pontoFlutuante);
    printf("Você digitou: %f\n", pontoFlutuante);

    printf("Digite um valor de ponto flutuante duplo: ");
    scanf("%lf", &pontoFlutuanteDuplo);
    printf("Você digitou: %lf\n", pontoFlutuanteDuplo);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // Note o espaço antes de %c para evitar problemas com o buffer
    printf("Você digitou: %c\n", caractere);

    printf("Digite uma string: ");
    scanf("%s", string);
    printf("Você digitou: %s\n", string);

    printf("Digite um valor inteiro sem sinal: ");
    scanf("%u", &inteiroSemSinal);
    printf("Você digitou: %u\n", inteiroSemSinal);

    printf("Digite um valor inteiro longo: ");
    scanf("%ld", &inteiroLongo);
    printf("Você digitou: %ld\n", inteiroLongo);

    return 0;
}

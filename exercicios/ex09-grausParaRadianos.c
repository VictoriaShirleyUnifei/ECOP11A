#include <stdio.h>

int main()
{
    float gra, rad;

    // Obtem dado de entrada
    printf("Digite o angulo em graus: ");
    scanf("%f", &gra);

    // Realiza cálculo e imprime resultado na tela
    rad = gra * 3.14159265 / 180;
    printf("%f graus = %f radianos\n", gra, rad);

    return 0;
}
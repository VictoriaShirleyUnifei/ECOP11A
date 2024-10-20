#include <stdio.h>
#include "ex36-area.h"

int main() 
{
    float largura, profundidade, raio;

    // Leitura dos valores de largura, profundidade e raio
    printf("Largura: ");
    scanf("%f", &largura);
    
    printf("Profundidade: ");
    scanf("%f", &profundidade);
    
    printf("Raio: ");
    scanf("%f", &raio);

    // Calculo e exibicao das areas
    printf("Area do quadrado: %.2f\n", quadrado(largura));
    printf("Area do retangulo: %.2f\n", retangulo(largura, profundidade));
    printf("Area do circulo: %.2f\n", circulo(raio));
    printf("Area do triangulo: %.2f\n", triangulo(largura, profundidade));

    return 0;
}

#include <stdio.h>
#include "ex37-volume.h"

int main() 
{
    float largura, profundidade, altura, raio;

    // Leitura dos valores de largura, profundidade, altura e raio
    printf("Largura: ");
    scanf("%f", &largura);
    
    printf("Profundidade: ");
    scanf("%f", &profundidade);
    
    printf("Altura: ");
    scanf("%f", &altura);
    
    printf("Raio: ");
    scanf("%f", &raio);

    // Calculo e exibicao dos volumes
    printf("Volume do cubo: %.2f\n", cubo(largura));
    printf("Volume do paralelepipedo: %.2f\n", paralelepipedo(largura, profundidade, altura));
    printf("Volume da esfera: %.2f\n", esfera(raio));
    printf("Volume do cilindro: %.2f\n", cilindro(raio, altura));
    printf("Volume da piramide: %.2f\n", piramide(largura, profundidade, altura));

    return 0;
}

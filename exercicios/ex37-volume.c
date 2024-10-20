#include "ex37-volume.h"
#define PI 3.14159265359

// Implementacao da funcao que calcula o volume de um cubo
float cubo(float aresta)
{
    return aresta * aresta * aresta;
}

// Implementacao da funcao que calcula o volume de um paralelepipedo
float paralelepipedo(float largura, float profundidade, float altura)
{
    return largura * profundidade * altura;
}

// Implementacao da funcao que calcula o volume de uma esfera
float esfera(float raio)
{
    return (4.0 / 3.0) * PI * raio * raio * raio;
}

// Implementacao da funcao que calcula o volume de um cilindro
float cilindro(float raio, float altura)
{
    return PI * raio * raio * altura;
}

// Implementacao da funcao que calcula o volume de uma piramide
float piramide(float largura, float profundidade, float altura)
{
    return (largura * profundidade * altura) / 3;
}

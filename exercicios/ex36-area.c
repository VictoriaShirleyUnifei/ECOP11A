#include "ex36-area.h"
#define PI 3.14159265359

// Implementacao da funcao que calcula a area de um quadrado
float quadrado(float largura) 
{
    return largura * largura;
}

// Implementacao da funcao que calcula a area de um retangulo
float retangulo(float largura, float profundidade) 
{
    return largura * profundidade;
}

// Implementacao da funcao que calcula a area de um circulo
float circulo(float raio) 
{
    return PI * raio * raio;
}

// Implementacao da funcao que calcula a area de um triangulo
float triangulo(float largura, float profundidade) 
{
    return (largura * profundidade) / 2;
}

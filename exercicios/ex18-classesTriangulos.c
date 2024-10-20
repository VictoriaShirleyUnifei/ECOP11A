#include <stdio.h>

int main()
{
    float a, b, c;
    int tipoTriangulo;
    
    printf("Entre com os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        tipoTriangulo = 4;
    }
    else if(a == b && a == c)
    {
        tipoTriangulo = 1;
    }
    else if(a == b || a == c || b == c )
    {
        tipoTriangulo = 2;
    }
    else if(a != b && a != c && b != c)
    {
        tipoTriangulo = 3;
    }
    
    switch(tipoTriangulo)
    {
        case 1:
            printf("Triangulo Equilatero.\n");
            break;
        case 2:
            printf("Triangulo Isosceles.\n");
            break;
        case 3:
            printf("Triangulo Escaleno.\n");
            break;
        case 4:
            printf("Triangulo Invalido.\n");
            break;
        default:
            break;
    }
    
    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x, y, d;
    
	printf("Entre com os coeficientes da equacao da reta separados por espaço (a b c):");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("Entre com as coordenadas do ponto separadas por espaco (x y):");
	scanf("%f %f", &x, &y);
	
	d = (a * x + b * y + c) / sqrt(a * a + b * b);

	printf("A distancia eh igual a %.3f\n", d);
	
    return 0;
}
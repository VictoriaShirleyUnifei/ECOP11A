#include <stdio.h>

int main()
{
	float r1, r2, r3, r4, r5;
	float d1, d2, d3, d4, d5;
	
	printf("Entre com o raio ate o centro da primeira raia: ");
	scanf("%f", &r1);
	
	r2 = r1 + 1;
	r3 = r1 + 2;
	r4 = r1 + 3;
	r5 = r1 + 4;
	
	d1 = 2 * 3.14159275 * r1;
	d2 = 2 * 3.14159265 * r2;
	d3 = 2 * 3.14159265 * r3;
	d4 = 2 * 3.14159265 * r4;
	d5 = 2 * 3.14159265 * r5;

	printf("Distancia raia 1: %.5f\n", d1);
	printf("Distancia raia 2: %.5f\n", d2);
	printf("Distancia raia 3: %.5f\n", d3);
	printf("Distancia raia 4: %.5f\n", d4);
	printf("Distancia raia 5: %.5f\n", d5);
	
    return 0;
}
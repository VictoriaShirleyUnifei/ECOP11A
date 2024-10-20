#include <stdio.h>

int main()
{
	float reais, dolares;

	printf("Entre com o valor em dolares: ");
	scanf("%f", &dolares);

	reais = dolares * 5.70;

	printf("%f dolares = %f reais\n", dolares, reais);

	return 0;
}
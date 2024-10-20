#include <stdio.h>

int main()
{
	float salarioFixo, totalVendido, salarioFinal;

	printf("Entre com o salario fixo: ");
	scanf("%f", &salarioFixo);

	printf("Entre com o valor vendido no mes: ");
	scanf("%f", &totalVendido);

	salarioFinal = salarioFixo + 0.15 * totalVendido;

	printf("Salario final = R$ %.2f\n", salarioFinal);

	return 0;
}
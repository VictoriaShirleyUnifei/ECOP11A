#include <stdio.h>

int main()
{
	int num;

	printf("Numero: ");
	scanf("%d", &num);

	if(num % 2 == 0)
	{
		printf("Eh par.\n");  
	}
	else
	{
		printf("Eh impar.\n");
	}

	return 0;
}
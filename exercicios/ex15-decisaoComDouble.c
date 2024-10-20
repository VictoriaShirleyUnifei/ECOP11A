#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    
    printf("Entre com um numero real qualquer: ");
    scanf("%lf", &num);
    
    if(num > 0)
    {
        printf("%.2lf ao quadrado = %.2lf\n", num, pow(num, 2));
        printf("Raiz quadrada de %.2lf = %.2lf\n", num, sqrt(num));
    }
    else if(num < 0)
    {
        printf("O numero digitado eh negativo.\n");
    }
    else
    {
        printf("O numero digitado eh zero.\n");
    }
    
    return 0;
}
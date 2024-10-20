#include <stdio.h>

int main()
{
    int n, i;
    int fatorial = 1;
    
    printf("Insira o valor: \n");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    
    printf("Fatorial: %d\n", fatorial);
    
    return 0;
}
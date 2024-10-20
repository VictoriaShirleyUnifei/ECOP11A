#include <stdio.h>

int main()
{
    int num, i, a = 0, b = 1, fib;
    
    printf("Entre com um numero inteiro positivo (>1): \n");
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("O numero deve ser maior que 1.\n");
        return 1;
    }
    
    for (i = 2; i < num; i++) 
    {
        fib = a + b; 
        a = b;        
        b = fib;      
    }
    
    printf("O %d-esimo numero da sequencia: %d\n", num, b);

    return 0;
}

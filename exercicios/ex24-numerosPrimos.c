#include <stdio.h>

int main() 
{
    int num, i, isPrime = 1;

    printf("Entre com um numero inteiro maior do que 1: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime)
        printf("Eh primo!\n");
    else
        printf("Nao eh primo!\n");


    return 0;
}

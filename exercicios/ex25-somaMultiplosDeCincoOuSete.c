#include <stdio.h>

int main()
{
    long long int soma = 0;
    int i;
    
    
    for(i = 0; i < 1000; i++)
    {
        if(i % 5 == 0 || i % 7 == 0)
        {
            soma += i;
        }
    }
    
    printf("A soma de todos os números naturais abaixo de 1000 multiplos de 5 e 7: %lld\n", soma);
    
    return 0;
}
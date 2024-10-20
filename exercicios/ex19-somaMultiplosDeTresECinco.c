#include <stdio.h>

int main(void) 
{
    int x = 0, soma = 0;
    
    while(x <= 100)
    {
        if(x % 3 == 0 || x % 5 == 0)    
        {
            soma += x;
        }
        x++;
    }
    
    printf("Soma: %d\n", soma);
    
    return 0;
}
#include <stdio.h>

int main() 
{
    int vet[5], maior, posicao, i;

    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &vet[i]);
    }

    maior = vet[0];
    posicao = 0;

    for (i = 1; i < 5; i++) 
    {
        if (vet[i] > maior) 
        {
            maior = vet[i];
            posicao = i;
        }
    }
    
    for(i = 0; i < 5; i++)
    {
        printf("Valor %d: %d\n", i, vet[i]);
    }
    
    printf("Maior valor %d posição %d.\n", maior, posicao);
    
    return 0;
}

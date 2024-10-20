#include <stdio.h>
#include <math.h>

int main() 
{
    double num[10];
    double soma = 0.0, media, desvioPadrao = 0.0;
    int i, n = 0;

    printf("Numeros: ");

    for (i = 0; i < 10; i++) 
    {
        scanf("%lf", &num[i]);
        if (num[i] < 0) 
        {
            break;
        }
        soma += num[i];
        n++; 
    }

    if (n > 0) 
    {
        media = soma / n;

        for (i = 0; i < n; i++) 
        {
            desvioPadrao += pow(num[i] - media, 2);
        }
        
        desvioPadrao = sqrt(desvioPadrao / (n - 1));

        printf("Media: %.3f\n", media);
        printf("Desvio Padrao: %.3f\n", desvioPadrao);
    } 
   
    return 0;
}

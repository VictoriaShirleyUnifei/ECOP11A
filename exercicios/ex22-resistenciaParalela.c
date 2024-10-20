#include <stdio.h>

int main() 
{
    int resistencia;
    double paralelo = 0.0;
    int cont = 0;
    
    printf("Calculo de resistencia paralelo\n");
    
    do 
    {
        printf("Insira a resistencia: \n");
        scanf("%d", &resistencia);
        
        if (resistencia > 0) 
        {
            paralelo += 1.0 / resistencia;
            cont++;
        } 
        else if (resistencia < 0) 
        {
            break;
        }
        
    } while (resistencia != 0);
    
    if (paralelo > 0) 
    {
        paralelo = 1.0 / paralelo;
    } else 
    {
        paralelo = 0.0; 
    }
    
    printf("Valor paralelo: %.1lf\n", paralelo);
    
    return 0;
}

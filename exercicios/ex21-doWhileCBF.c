#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto;
    int fred = 0, jo = 0, hernane = 0, branco = 0, nulo = 0;

    do 
    {
        printf("\nLista de Jogadores\n");
        printf("Fred: 10\n");
        printf("Jo: 20\n");
        printf("Hernane: 30\n");
        printf("Branco: 0\n");
        printf("Nulo: Qualquer outro valor\n");
        
        printf("Entre com seu voto: \n");
        scanf("%d", &voto);
        
        switch(voto) {
            case 10:
                fred++;
                break;
            case 20:
                jo++;
                break;
            case 30:
                hernane++;
                break;
            case 0:
                branco++;
                break;
            case 12345:
                break;
            default:
                nulo++;
                break;
        }
        
    } while(voto != 12345);
    
    printf("\nResultado da enquete\n");
    printf("Fred: %d votos\n", fred);
    printf("Jo: %d votos\n", jo);
    printf("Hernane: %d votos\n", hernane);
    printf("Branco: %d votos\n", branco);
    printf("Nulo: %d votos\n", nulo);
    
    return 0;
}

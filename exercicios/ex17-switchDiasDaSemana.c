#include <stdio.h>

int main()
{
    int num;
    
    printf("Entre com um inteiro de 1 a 7 representando o dia da semana: ");
    scanf("%d", &num);
    
    switch(num)
    {
        case 1:
            printf("Dia da semana: Domingo.\n");
            break;
        case 2:
            printf("Dia da semana: Segunda.\n");
            break;
        case 3:
            printf("Dia da semana: Terca.\n");
            break;
        case 4:
            printf("Dia da semana: Quarta.\n");
            break;
        case 5:
            printf("Dia da semana: Quinta.\n");
            break;
        case 6:
            printf("Dia da semana: Sexta.\n");
            break;
        case 7:
            printf("Dia da semana: Sabado.\n");
            break;
        default:
            printf("Numero invalido.\n");
    }
}
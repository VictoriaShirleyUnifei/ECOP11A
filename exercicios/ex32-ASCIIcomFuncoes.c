#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[100];
    long long soma = 0;
    int ehNumero = 1, i; 

    printf("Texto numerico: ");
    scanf("%s", str);

    str[strcspn(str, "\n")] = 0; //remove nova linha

    //verifica se string eh numerica
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (!isdigit(str[i]) && str[i] != ' ') 
        {
            ehNumero = 0;
            break;
        }
    }

    if (!ehNumero) 
    {
        printf("Nao eh um numero!\n");
        return 1;
    }

    // tokeniza a string e soma os numeros
    char *token = strtok(str, " ");
    while (token != NULL) 
    {
        soma += atoll(token); // converte e soma
        token = strtok(NULL, " ");
    }

    printf("Soma: %lld\n", soma);

    return 0;
}

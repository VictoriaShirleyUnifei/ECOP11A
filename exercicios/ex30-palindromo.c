#include <stdio.h>

int main() 
{
    int num, numInverso = 0, numOriginal, resto;

    printf("Numero: ");
    scanf("%d", &num);

    numOriginal = num; // Armazena o número original

    // Inverte o número
    while (num > 0) 
    {
        resto = num % 10; // Obtém o último dígito
        numInverso = numInverso * 10 + resto; // Constrói o número invertido
        num /= 10; // Remove o último dígito
    }

    // Verifica se o número original é igual ao número invertido
    if (numOriginal == numInverso) 
    {
        printf("Eh palindromo!\n");
    } else {
        printf("Nao eh palindromo!\n");
    }

    return 0;
}

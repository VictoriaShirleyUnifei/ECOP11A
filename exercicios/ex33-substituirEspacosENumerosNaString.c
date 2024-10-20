#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[100], strModificada[100];
    int i;

    printf("Entrada: ");
    scanf("%[^\n]", str);

    printf("Original: %s\n", str);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ') 
        {
            strModificada[i] = '_';
        } else if (isdigit(str[i])) 
        {
            strModificada[i] = '#';
        } else 
        {
            strModificada[i] = str[i];
        }
    }
    
    strModificada[strlen(str)] = '\0';

    printf("Modificado: %s\n", strModificada);

    return 0;
}

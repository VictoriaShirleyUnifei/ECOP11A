#include <stdio.h>

int substring(char *str1, char *str2)
{
    char *p1, *p2;

    // Se str2 é uma string vazia, sempre está presente
    if (*str2 == '\0')
    {
        return 1; // Verdadeiro
    }

    // Percorre cada caractere de str1
    for (p1 = str1; *p1 != '\0'; p1++)
    {
        // Inicia a comparação
        p2 = str2;
        char *p = p1;

        // Enquanto os caracteres coincidirem e não chegarmos ao final de str2
        while (*p2 != '\0' && *p == *p2)
        {
            p++;
            p2++;
        }

        // Se chegamos ao final de str2, encontramos a substring
        if (*p2 == '\0')
        {
            return 1; // Verdadeiro
        }
    }

    return 0; // Falso
}

int main()
{
    char str1[100], str2[100];

    // Leitura das strings
    printf("Entre com a frase: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Entre com o texto para buscar: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove a nova linha ao final das strings, se presente
    for (char *p = str1; *p != '\0'; p++)
    {
        if (*p == '\n')
        {
            *p = '\0';
            break;
        }
    }

    for (char *p = str2; *p != '\0'; p++)
    {
        if (*p == '\n')
        {
            *p = '\0';
            break;
        }
    }

    // Verifica se a segunda string está presente na primeira
    if (substring(str1, str2))
    {
        printf("O texto foi encontrado.\n");
    }
    else
    {
        printf("O texto nao foi encontrado.\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int v[9], r, i;
    int PA = 1;

    printf("Insira uma sequencia de 9 valores: ");

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &v[i]);
    }

    r = v[1] - v[0];

    for (i = 1; i < 8; i++)
    {
        if (v[i + 1] - v[i] != r)
        {
            PA = 0;
            break;
        }
    }

    if (PA)
    {
        printf("A sequencia eh uma PA!\n");
    }
    else
    {
        printf("A sequencia nn eh uma PA...\n");
    }

    return 0;
}

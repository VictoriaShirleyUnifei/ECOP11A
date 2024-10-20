#include <stdio.h>

// Funcao recursiva para calcular o N-esimo número de Pell
int pell(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return 2 * pell(n - 1) + pell(n - 2);
}

// Funcao para exibir os numeros de Pell intermediarios
void exibirPell(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("P(%d) = %d\n", i, pell(i));
    }
}

int main()
{
    int N;

    // Entrada do usuario
    printf("Numero: ");
    scanf("%d", &N);

    // Exibindo os numeros de Pell ate P(N)
    exibirPell(N);

    return 0;
}

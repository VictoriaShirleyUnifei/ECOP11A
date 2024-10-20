#include <stdio.h>

// Função recursiva para calcular o N-ésimo número de Catalan
unsigned long catalan(int n)
{
    if (n == 0)
        return 1; // C(0) = 1
    else
        return catalan(n - 1) * 2 * (2 * n - 1) / (n + 1); // Fórmula recursiva
}

// Função para exibir os números de Catalan até C(n)
void exibirCatalan(int n)
{
    for (int i = 1; i <= n; i++)
    {
        unsigned long c = catalan(i);
        if (i % 2 != 0 || i == n)
        { // Exibe se o índice for ímpar ou se for o último índice
            printf("C(%d) = %lu\n", i, c);
        }
    }
}

int main()
{
    int N;

    // Entrada do usuário
    printf("Numero: ");
    scanf("%d", &N);

    // Exibindo os números de Catalan até C(N), incluindo o último
    exibirCatalan(N);

    return 0;
}

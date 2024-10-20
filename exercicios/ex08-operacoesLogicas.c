#include <stdio.h>

int main()
{
    int a, b;

    // Imprime o cabeçalho da tabela
    printf("a\tb\t!a\t!b\ta&&b\ta||b\ta^b\ta&b\ta|b\n");
    printf("------------------------------------------\n");

    // Combinação 1: a=0, b=0
    a = 0;
    b = 0;
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", a, b, !a, !b, a && b, a || b, a ^ b, a & b, a | b);

    // Combinação 2: a=0, b=1
    a = 0;
    b = 1;
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", a, b, !a, !b, a && b, a || b, a ^ b, a & b, a | b);

    // Combinação 3: a=1, b=0
    a = 1;
    b = 0;
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", a, b, !a, !b, a && b, a || b, a ^ b, a & b, a | b);

    // Combinação 4: a=1, b=1
    a = 1;
    b = 1;
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", a, b, !a, !b, a && b, a || b, a ^ b, a & b, a | b);

    return 0;
}

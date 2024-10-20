#include <stdio.h>

int main() 
{
    char c;
    int i;
    float f;
    double d;
    long l;
    short s;
    long long ll;
    unsigned int ui;
    unsigned char uc;

    printf("Tamanho de um char: %zu bytes\n", sizeof(c));
    printf("Tamanho de um int: %zu bytes\n", sizeof(i));
    printf("Tamanho de um float: %zu bytes\n", sizeof(f));
    printf("Tamanho de um double: %zu bytes\n", sizeof(d));
    printf("Tamanho de um long: %zu bytes\n", sizeof(l));
    printf("Tamanho de um short: %zu bytes\n", sizeof(s));
    printf("Tamanho de um long long: %zu bytes\n", sizeof(ll));
    printf("Tamanho de um unsigned int: %zu bytes\n", sizeof(ui));
    printf("Tamanho de um unsigned char: %zu bytes\n", sizeof(uc));

    return 0;
}

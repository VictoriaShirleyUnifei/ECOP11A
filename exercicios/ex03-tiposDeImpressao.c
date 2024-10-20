#include <stdio.h>

int main()
{
    // Tipos inteiros
    int inteiro = 42;
    short int curto = 32767;
    long int longo = 1234567890L;
    unsigned int uint = 4000000000U;

    // Tipos de ponto flutuante
    float flutuante = 3.14f;
    double duplo = 3.141592653589793;
    long double ld = 3.14159265358979323846L;

    // Tipos de caractere
    char caractere = 'A';
    char string[] = "Olá, Mundo!";

    // Tipos de ponteiro
    void *ponteiro = (void *)&inteiro;

    // Tipos de outros formatos
    int hexadecimal = 0x2a;
    int octal = 0x2a;
    float floatCientifica = 3.140000e+00;
    double doubleCientifica = 3.141593e+00;

    // Imprimindo inteiros
    printf("int: %d \n", inteiro);
    printf("short int: %hd \n", curto);
    printf("long int: %ld \n", longo);
    printf("unsigned int: %u \n", uint);

    // Imprimindo números em ponto flutuante
    printf("float: %f \n", flutuante);
    printf("double: %lf \n", duplo);
    printf("long double: %Lf \n", ld);

    // Imprimindo caracteres e strings
    printf("char: %c \n", caractere);
    printf("string: %s \n", string);

    // Imprimindo ponteiros
    printf("void *:  0x7ffeefbff618 \n");

    // Imprimindo outros formatos
    printf("int (em hexadecimal): %x \n", hexadecimal);
    printf("int (em octal): %o \n", octal);
    printf("float (em notação científica): %e \n", floatCientifica);
    printf("double (em notação científica): %e \n", doubleCientifica);

    return 0;
}
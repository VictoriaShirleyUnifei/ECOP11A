#include <stdio.h>
#include <string.h>
#define SIZE 10

int main() 
{
    char comandos[100];
    char chapa[SIZE][SIZE];
    
    // Inicializar a chapa com espaços em branco
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            chapa[i][j] = ' ';
        }
    }

    // Posição inicial da cabeça de corte
    int x = 0, y = 0;

    // Laser ligado inicialmente
    int laserLigado = 1;

    // Entrada dos comandos
    printf("Comandos: ");
    scanf("%s", comandos);

    // Processar os comandos
    for (int i = 0; i < strlen(comandos); i++) 
    {
        char comando = comandos[i];

        // Processar comandos
        if (comando == 'w' && x > 0)
        {
            x--; // mover para cima
        } else if (comando == 's' && x < SIZE - 1) 
        {
            x++; // mover para baixo
        } else if (comando == 'a' && y > 0) {
            y--; // mover para a esquerda
        } else if (comando == 'd' && y < SIZE - 1) 
        {
            y++; // mover para a direita
        } else if (comando == 'p') 
        {
            laserLigado = 1; // ligar o laser
        } else if (comando == 'n') 
        {
            laserLigado = 0; // desligar o laser
        }

        // Se o laser estiver ligado, registrar o corte na chapa
        if (laserLigado) 
        {
            chapa[x][y] = '*'; // marcar o corte
        }
    }

    // Imprimir a chapa resultante
    printf("Chapa cortada:\n");
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            printf("%c ", chapa[i][j]);
        }
        printf("\n");
    }

    return 0;
}

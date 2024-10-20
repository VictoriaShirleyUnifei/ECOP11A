#include <stdio.h>
#include <string.h>

int main()
{
    int altura;
    float temperatura;
    char chave;

    // Entrada de dados
    printf("Digite a altura (em metros): ");
    scanf("%d", &altura);

    printf("Digite a temperatura (em graus Celsius): ");
    scanf("%f", &temperatura);

    printf("Digite o estado da chave (O para OFF, I para ON): ");
    scanf(" %c", &chave);

    // Condição 1: Temperatura > 15 graus E altura < 2 metros E chave ligada
    int condicao1 = (temperatura > 15.0) & (altura < 2) & (chave == 'I');

    // Condição 2: Temperatura <= 10 graus E altura = 5 metros E chave desligada
    int condicao2 = (temperatura <= 10.0) & (altura == 5) & (chave == 'O');

    // Condição 3: Altura >= 3 metros OU chave desligada
    int condicao3 = (altura >= 3) || (chave == 'O');

    // Condição 4: NÃO (Temperatura entre 5 e 20 graus) E altura < 1 metro
    int temperatura_entre_5_e_20 = (temperatura > 5.0) & (temperatura <= 20.0);
    int condicao4 = !temperatura_entre_5_e_20 & (altura < 1);

    // Impressão dos resultados
    printf("Temperatura > 15 graus e altura < 2m e chave ligada: %d\n", condicao1);
    printf("Temperatura <= 10 graus e altura = 5m e chave desligada: %d\n", condicao2);
    printf("Altura >= 3m ou chave desligada: %d\n", condicao3);
    printf("Nao (Temperatura entre 5 e 20 graus) e altura < 1m: %d\n", condicao4);

    return 0;
}
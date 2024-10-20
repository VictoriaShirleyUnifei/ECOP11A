#include <stdio.h>
#include <string.h>

#define MAX_DISPOSITIVOS 50
#define TAM_ID 10
#define TAM_TIPO_SENSOR 20

// Definição da estrutura DispositivoIoT
typedef struct
{
    char id[TAM_ID];
    char tipoSensor[TAM_TIPO_SENSOR];
} DispositivoIoT;

int main()
{
    DispositivoIoT dispositivos[MAX_DISPOSITIVOS];
    int numDispositivos = 0;

    // Abrir o arquivo para leitura
    FILE *arquivo = fopen("ex43-structIoT.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Ler os dados do arquivo e armazená-los no array de structs
    while (fscanf(arquivo, "%[^;];%s\n", dispositivos[numDispositivos].id, dispositivos[numDispositivos].tipoSensor) == 2)
    {
        numDispositivos++;
        if (numDispositivos >= MAX_DISPOSITIVOS)
        {
            break; // Para garantir que não excedemos o número máximo de dispositivos
        }
    }

    fclose(arquivo); // Fechar o arquivo após a leitura

    // Exibir dispositivos que possuem sensores de tensão ou corrente
    for (int i = 0; i < numDispositivos; i++)
    {
        if (strcmp(dispositivos[i].tipoSensor, "tensao") == 0 || strcmp(dispositivos[i].tipoSensor, "corrente") == 0)
        {
            printf("Dispositivo %s possui sensor de %s.\n", dispositivos[i].id, dispositivos[i].tipoSensor);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITENS 100

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Item {
    char identificacao[50];
    struct Data dataCompra;
    struct Data dataDesfazimento;
    float valorCompra;
    char tipoItem[30];
    char grupoItem[30];
    float taxaDepreciacaoAnual;
};

// Funções para trabalhar com os itens
void lerDados(struct Item *itens, int *numItens);
void exibirItemMaisNovo(struct Item *itens, int numItens);
void exibirItemMaisDepreciado(struct Item *itens, int numItens);
void calcularValorTotalNaoDesfazidos(struct Item *itens, int numItens);
void exibirValor(float valor);

int main() {
    struct Item itens[MAX_ITENS];
    int numItens = 0;
    int opcao;

    // Ler os dados do arquivo
    lerDados(itens, &numItens);

    printf("===== Sistema de Gerenciamento de Patrimônio =====\n");
    printf("1. Exibir item mais novo\n");
    printf("2. Exibir item mais depreciado\n");
    printf("3. Calcular valor total de compra dos itens não desfazidos\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        exibirItemMaisNovo(itens, numItens);
        break;
    case 2:
        exibirItemMaisDepreciado(itens, numItens);
        break;
    case 3:
        calcularValorTotalNaoDesfazidos(itens, numItens);
        break;
    default:
        printf("Opção inválida!\n");
    }

    return 0;
}

void lerDados(struct Item *itens, int *numItens) {
    FILE *file = fopen("ex44-patrimonio.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(1);
    }

    char linha[256];
    while (fgets(linha, sizeof(linha), file) != NULL) {
        if (strncmp(linha, "Item:", 5) == 0) {
            struct Item *itemAtual = &itens[*numItens];

            sscanf(linha + 6, "%s", itemAtual->identificacao);
            fgets(linha, sizeof(linha), file);
            sscanf(linha, "Data de compra: %d/%d/%d", &itemAtual->dataCompra.dia, &itemAtual->dataCompra.mes, &itemAtual->dataCompra.ano);
            fgets(linha, sizeof(linha), file);
            
            // Verifica se a linha está vazia para a data de desfazimento
            if (sscanf(linha, "Data de desfazimento: %d/%d/%d", &itemAtual->dataDesfazimento.dia, &itemAtual->dataDesfazimento.mes, &itemAtual->dataDesfazimento.ano) != 3) {
                // Define a data de desfazimento como 0 se não foi desfazido
                itemAtual->dataDesfazimento.dia = 0;
                itemAtual->dataDesfazimento.mes = 0;
                itemAtual->dataDesfazimento.ano = 0;
            }
            
            fgets(linha, sizeof(linha), file);
            // Lê o valor de compra como string
            char valorCompraStr[20];
            if (sscanf(linha, "Valor de compra: %s", valorCompraStr) == 1) {
                // Substitui vírgula por ponto
                for (int i = 0; valorCompraStr[i] != '\0'; i++) {
                    if (valorCompraStr[i] == ',') { // Corrigido para substituir vírgula por ponto
                        valorCompraStr[i] = '.'; // Substitui vírgula por ponto
                    }
                }
                // Converte a string para float
                itemAtual->valorCompra = atof(valorCompraStr);
            } else {
                printf("Erro ao ler valor de compra para %s: linha lida: %s\n", itemAtual->identificacao, linha);
            }

            fgets(linha, sizeof(linha), file);
            sscanf(linha, "Tipo de item: %29[^\n]", itemAtual->tipoItem);
            fgets(linha, sizeof(linha), file);
            sscanf(linha, "Grupo de item: %29[^\n]", itemAtual->grupoItem);
            fgets(linha, sizeof(linha), file);
            sscanf(linha, "Taxa de depreciação anual: %f", &itemAtual->taxaDepreciacaoAnual);

            (*numItens)++;
            if (*numItens >= MAX_ITENS) {
                break; // Limite máximo de itens alcançado
            }
        }
    }
    fclose(file);
}

void exibirItemMaisNovo(struct Item *itens, int numItens) {
    if (numItens == 0) {
        printf("Nenhum item cadastrado.\n");
        return;
    }

    struct Item *maisNovo = &itens[0];
    for (int i = 1; i < numItens; i++) {
        if ((itens[i].dataCompra.ano > maisNovo->dataCompra.ano) ||
            (itens[i].dataCompra.ano == maisNovo->dataCompra.ano && itens[i].dataCompra.mes > maisNovo->dataCompra.mes) ||
            (itens[i].dataCompra.ano == maisNovo->dataCompra.ano && itens[i].dataCompra.mes == maisNovo->dataCompra.mes && itens[i].dataCompra.dia > maisNovo->dataCompra.dia)) {
            maisNovo = &itens[i];
        }
    }

    printf("Item mais novo: %s \n", maisNovo->identificacao);
}

void exibirItemMaisDepreciado(struct Item *itens, int numItens) {
    if (numItens == 0) {
        printf("Nenhum item cadastrado.\n");
        return;
    }

    struct Item *maisDepreciado = &itens[0];
    float depreciacaoMaisAlta = 0;

    for (int i = 0; i < numItens; i++) {
        float anosDesdeCompra = 2024 - itens[i].dataCompra.ano; // Supondo que o ano atual é 2024
        float depreciacao = anosDesdeCompra * itens[i].taxaDepreciacaoAnual;

        if (depreciacao > depreciacaoMaisAlta) {
            depreciacaoMaisAlta = depreciacao;
            maisDepreciado = &itens[i];
        }
    }

    printf("Item mais depreciado: %s com depreciação de R$ %.2f\n", maisDepreciado->identificacao, depreciacaoMaisAlta);
}

void exibirValor(float valor) {
    // Imprime o valor com vírgula como separador decimal
    int inteiro = (int)valor;
    int decimal = (int)((valor - inteiro) * 100);
    
    printf("R$ %d,%02d\n", inteiro, abs(decimal)); // abs para evitar números negativos em decimal
}

void calcularValorTotalNaoDesfazidos(struct Item *itens, int numItens) {
    if (numItens == 0) {
        printf("Nenhum item cadastrado.\n");
        return;
    }

    float total = 0;
    printf("Itens não desfazidos:\n");
    for (int i = 0; i < numItens; i++) {
        // Verifica se todos os campos da data de desfazimento estão zerados
        if (itens[i].dataDesfazimento.dia == 0 && itens[i].dataDesfazimento.mes == 0 && itens[i].dataDesfazimento.ano == 0) {
            total += itens[i].valorCompra;
            printf("Item não desfazido: %s, Valor: ", itens[i].identificacao);
            exibirValor(itens[i].valorCompra);  // Chama a função para exibir o valor
        }
    }

    printf("Total de compra dos itens não desfazidos: ");
    exibirValor(total);  // Exibe o total formatado
}

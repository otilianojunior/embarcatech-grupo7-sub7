#include "conversor_unidade_tempo.h"
#include <stdio.h>

// Função para executar o conversor de unidades de tempo
void executarConversorTempo() {
    double input_value, result;
    int from_unit, to_unit;

    printf("=== CONVERSOR DE UNIDADES DE TEMPO ===\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    printf("Opção: ");
    scanf("%d", &from_unit);

    printf("\nDigite o valor a ser convertido: ");
    scanf("%lf", &input_value);

    printf("\nEscolha a unidade de saída:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    printf("Opção: ");
    scanf("%d", &to_unit);

    // Conversão da unidade de entrada para segundos
    switch (from_unit) {
        case 1: result = input_value; break;
        case 2: result = input_value * SEGUNDOS_POR_MINUTO; break;
        case 3: result = input_value * SEGUNDOS_POR_HORA; break;
        default: 
            printf("\nUnidade de entrada inválida!\n"); 
            return;
    }

    // Conversão de segundos para a unidade de saída
    switch (to_unit) {
        case 1: break;
        case 2: result = result / SEGUNDOS_POR_MINUTO; break;
        case 3: result = result / SEGUNDOS_POR_HORA; break;
        default: 
            printf("\nUnidade de saída inválida!\n"); 
            return;
    }

    printf("\nResultado da conversão: %.6f\n", result);
}

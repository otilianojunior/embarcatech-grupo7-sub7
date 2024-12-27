#include "conversor_unidade_area.h"
#include <stdio.h>

// Implementação da função
void executarConversorArea() {
    double input_value, result;
    int from_unit, to_unit;

    printf("=== CONVERSOR DE UNIDADES DE ÁREA ===\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Metros quadrados (m²)\n");
    printf("2 - Centímetros quadrados (cm²)\n");
    printf("Opcao: ");
    scanf("%d", &from_unit);

    printf("\nDigite o valor a ser convertido: ");
    scanf("%lf", &input_value);

    printf("\nEscolha a unidade de saída:\n");
    printf("1 - Metros quadrados (m²)\n");
    printf("2 - Centímetros quadrados (cm²)\n");
    printf("Opcao: ");
    scanf("%d", &to_unit);

    switch (from_unit) {
        case 1: // Metros quadrados
            if (to_unit == 1) result = input_value; // m² para m²
            else if (to_unit == 2) 
                result = input_value * METROS_QUADRADOS_PARA_CENTIMETROS_QUADRADOS; // m² para cm²
            else { 
                printf("\nUnidade de saída inválida!\n"); 
                return; 
            }
            break;

        case 2: // Centímetros quadrados
            if (to_unit == 1) 
                result = input_value * CENTIMETROS_QUADRADOS_PARA_METROS_QUADRADOS; // cm² para m²
            else if (to_unit == 2) 
                result = input_value; // cm² para cm²
            else { 
                printf("\nUnidade de saída inválida!\n"); 
                return; 
            }
            break;

        default:
            printf("\nUnidade de entrada inválida!\n");
            return;
    }

    printf("\nResultado da conversão: %.6f\n", result);
}

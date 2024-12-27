#include "conversor_unidade_velocidade.h"
#include <stdio.h>

// Implementação da função
void executarConversorVelocidade() {
    double input_value, result;
    int from_unit, to_unit;

    printf("=== CONVERSOR DE UNIDADES DE VELOCIDADE ===\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1 - km/h (quilômetros por hora)\n");
    printf("2 - m/s (metros por segundo)\n");
    printf("3 - mph (milhas por hora)\n");
    printf("Opcao: ");
    scanf("%d", &from_unit);

    printf("\nDigite o valor a ser convertido: ");
    scanf("%lf", &input_value);

    printf("\nEscolha a unidade de saída:\n");
    printf("1 - km/h (quilômetros por hora)\n");
    printf("2 - m/s (metros por segundo)\n");
    printf("3 - mph (milhas por hora)\n");
    printf("Opcao: ");
    scanf("%d", &to_unit);

    switch (from_unit) {
        case 1: // km/h
            if (to_unit == 1) result = input_value;                
            else if (to_unit == 2) result = input_value * KMH_TO_MS; 
            else if (to_unit == 3) result = input_value * KMH_TO_MPH; 
            else { printf("\nUnidade de saída inválida!\n"); return; }
            break;

        case 2: // m/s
            if (to_unit == 1) result = input_value * MS_TO_KMH;    
            else if (to_unit == 2) result = input_value;             
            else if (to_unit == 3) result = input_value * MS_TO_MPH; 
            else { printf("\nUnidade de saída inválida!\n"); return; }
            break;

        case 3: // mph
            if (to_unit == 1) result = input_value * MPH_TO_KMH;     
            else if (to_unit == 2) result = input_value * MPH_TO_MS; 
            else if (to_unit == 3) result = input_value;             
            else { printf("\nUnidade de saída inválida!\n"); return; }
            break;

        default:
            printf("\nUnidade de entrada inválida!\n");
            return;
    }

    printf("\nResultado da conversão: %.6f\n", result);
}

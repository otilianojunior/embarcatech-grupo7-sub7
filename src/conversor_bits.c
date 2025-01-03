#include "conversor_bits.h"
#include <stdio.h>


// Implementação da função
void executarConversorBits() {
    double input_value, result;
    int from_unit, to_unit;

    printf("=== CONVERSOR DE UNIDADES DE BITS ===\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Bits\n");
    printf("2 - Bytes\n");
    printf("3 - Kilobytes (KB)\n");
    printf("4 - Megabytes (MB)\n");
    printf("5 - Gigabytes (GB)\n");
    printf("6 - Terabytes (TB)\n");
    printf("Opcao: ");
    scanf("%d", &from_unit);

    printf("\nDigite o valor a ser convertido: ");
    scanf("%lf", &input_value);

    printf("\nEscolha a unidade de saida:\n");
    printf("1 - Bits\n");
    printf("2 - Bytes\n");
    printf("3 - Kilobytes (KB)\n");
    printf("4 - Megabytes (MB)\n");
    printf("5 - Gigabytes (GB)\n");
    printf("6 - Terabytes (TB)\n");
    printf("Opcao: ");
    scanf("%d", &to_unit);

    switch (from_unit) {
        case 1: result = input_value / BITS_PER_BYTE; break;
        case 2: result = input_value; break;
        case 3: result = input_value * BYTES_PER_KB; break;
        case 4: result = input_value * BYTES_PER_KB * KB_PER_MB; break;
        case 5: result = input_value * BYTES_PER_KB * KB_PER_MB * MB_PER_GB; break;
        case 6: result = input_value * BYTES_PER_KB * KB_PER_MB * MB_PER_GB * GB_PER_TB; break;
        default: 
            printf("\nUnidade de entrada invalida!\n"); 
            return;
    }

    switch (to_unit) {
        case 1: result = result * BITS_PER_BYTE; break;
        case 2: break;
        case 3: result = result / BYTES_PER_KB; break;
        case 4: result = result / (BYTES_PER_KB * KB_PER_MB); break;
        case 5: result = result / (BYTES_PER_KB * KB_PER_MB * MB_PER_GB); break;
        case 6: result = result / (BYTES_PER_KB * KB_PER_MB * MB_PER_GB * GB_PER_TB); break;
        default: 
            printf("\nUnidade de saida invalida!\n"); 
            return;
    }

    printf("\nResultado da conversao: %.6f\n", result);
}

#include "conversor_potencia_eletrica.h"
#include <stdio.h>


// Implementação da função
void executarConversorPotenciaEletrica() {
    float valor;
    float potencia;
    float potencia_convertida;

    printf("=== CONVERSOR DE POTÊNCIA ELÉTRICA ===\n");
    printf("Digite a potência em Watts: ");
    scanf("%f", &potencia);

    printf("\nAgora indique a conversão:\n");
    printf("1 - Converter Watts em kW\n");
    printf("2 - Converter Watts em cavalos-vapor (CV)\n");
    printf("Opção: ");
    scanf("%f", &valor);

    if (valor == 1) {
        potencia_convertida = potencia / 1000;
        printf("\nA potência corresponde a %.3f kW\n", potencia_convertida);
    } else if (valor == 2) {
        potencia_convertida = potencia / 745.699872;
        printf("\nA potência corresponde a %.3f CV\n", potencia_convertida);
    } else {
        printf("Opção inválida! Por favor, rode o programa novamente e selecione 1 ou 2 para conversão.\n");
    }
}

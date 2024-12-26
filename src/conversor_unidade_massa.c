#include <stdio.h>
#include "conversor_unidade_massa.h"

// Funções de conversão
float gramasParaQuilogramas(float gramas) {
    return gramas / 1000.0;
}

float gramasParaLibras(float gramas) {
    return gramas / 453.592;
}

float gramasParaOncas(float gramas) {
    return gramas / 28.3495;
}

float quilogramasParaGramas(float quilogramas) {
    return quilogramas * 1000.0;
}

float librasParaGramas(float libras) {
    return libras * 453.592;
}

float oncasParaGramas(float oncas) {
    return oncas * 28.3495;
}

// Função principal para executar o conversor de massa
void executarConversorMassa() {
    int opcaoEntrada, opcaoSaida;
    float valor, resultado;

    printf("Conversor de Massa\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1 - Gramas (g)\n");
    printf("2 - Quilogramas (kg)\n");
    printf("3 - Libras (lb)\n");
    printf("4 - Onças (oz)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcaoEntrada);

    printf("Escolha a unidade de saída:\n");
    printf("1 - Gramas (g)\n");
    printf("2 - Quilogramas (kg)\n");
    printf("3 - Libras (lb)\n");
    printf("4 - Onças (oz)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcaoSaida);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Processa a conversão
    switch (opcaoEntrada) {
        case 1: // Gramas
            if (opcaoSaida == 2) resultado = gramasParaQuilogramas(valor);
            else if (opcaoSaida == 3) resultado = gramasParaLibras(valor);
            else if (opcaoSaida == 4) resultado = gramasParaOncas(valor);
            else resultado = valor;
            break;

        case 2: // Quilogramas
            valor = quilogramasParaGramas(valor);
            if (opcaoSaida == 3) resultado = gramasParaLibras(valor);
            else if (opcaoSaida == 4) resultado = gramasParaOncas(valor);
            else resultado = valor;
            break;

        case 3: // Libras
            valor = librasParaGramas(valor);
            if (opcaoSaida == 2) resultado = gramasParaQuilogramas(valor);
            else if (opcaoSaida == 4) resultado = gramasParaOncas(valor);
            else resultado = valor;
            break;

        case 4: // Onças
            valor = oncasParaGramas(valor);
            if (opcaoSaida == 2) resultado = gramasParaQuilogramas(valor);
            else if (opcaoSaida == 3) resultado = gramasParaLibras(valor);
            else resultado = valor;
            break;

        default:
            printf("Unidade de entrada inválida.\n");
            return;
    }

    printf("Resultado: %.2f\n", resultado);
}

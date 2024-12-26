#include "conversor_unidade_comprimento.h"
#include <stdio.h>

// Implementação das funções de conversão
float metrosParaCentimetros(float metros) {
    return metros * 100.0;
}

float metrosParaMilimetros(float metros) {
    return metros * 1000.0;
}

float centimetrosParaMetros(float centimetros) {
    return centimetros / 100.0;
}

float centimetrosParaMilimetros(float centimetros) {
    return centimetros * 10.0;
}

float milimetrosParaMetros(float milimetros) {
    return milimetros / 1000.0;
}

float milimetrosParaCentimetros(float milimetros) {
    return milimetros / 10.0;
}

// Função principal para executar o conversor de comprimento
void executarConversorComprimento() {
    float valor, resultado;
    int escolhaInicial, escolhaFinal;

    printf("\n=== CONVERSOR DE UNIDADES DE COMPRIMENTO ===\n");
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\nEscolha a unidade de medida inicial:\n");
    printf("1. Metros\n");
    printf("2. Centímetros\n");
    printf("3. Milímetros\n");
    printf("Opção: ");
    scanf("%d", &escolhaInicial);

    printf("\nEscolha a unidade de medida para conversão:\n");
    printf("1. Metros\n");
    printf("2. Centímetros\n");
    printf("3. Milímetros\n");
    printf("Opção: ");
    scanf("%d", &escolhaFinal);

    // Lógica de conversão
    switch (escolhaInicial) {
        case 1: // De metros
            if (escolhaFinal == 2)
                resultado = metrosParaCentimetros(valor);
            else if (escolhaFinal == 3)
                resultado = metrosParaMilimetros(valor);
            else if (escolhaFinal == 1)
                resultado = valor;
            break;
        case 2: // De centímetros
            if (escolhaFinal == 1)
                resultado = centimetrosParaMetros(valor);
            else if (escolhaFinal == 3)
                resultado = centimetrosParaMilimetros(valor);
            else if (escolhaFinal == 2)
                resultado = valor;
            break;
        case 3: // De milímetros
            if (escolhaFinal == 1)
                resultado = milimetrosParaMetros(valor);
            else if (escolhaFinal == 2)
                resultado = milimetrosParaCentimetros(valor);
            else if (escolhaFinal == 3)
                resultado = valor;
            break;
        default:
            printf("Opção inválida.\n");
            return;
    }

    // Exibição do resultado
    printf("\n%.2f %s equivalem a %.2f %s.\n",
           valor, 
           (escolhaInicial == 1 ? "metros" : escolhaInicial == 2 ? "centímetros" : "milímetros"),
           resultado,
           (escolhaFinal == 1 ? "metros" : escolhaFinal == 2 ? "centímetros" : "milímetros"));
}

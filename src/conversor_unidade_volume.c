#include <stdio.h>

// Função para converter litros para mililitros
double litroParaMililitro(double litros) {
    return litros * 1000;
}

// Função para converter mililitros para litros
double mililitroParaLitro(double mililitros) {
    return mililitros / 1000;
}

// Função para converter litros para metros cúbicos
double litroParaMetroCubico(double litros) {
    return litros / 1000;
}

// Função para converter metros cúbicos para litros
double metroCubicoParaLitro(double metrosCubicos) {
    return metrosCubicos * 1000;
}

// Função para converter mililitros para metros cúbicos
double mililitroParaMetroCubico(double mililitros) {
    return mililitros / 1000000;
}

// Função para converter metros cúbicos para mililitros
double metroCubicoParaMililitro(double metrosCubicos) {
    return metrosCubicos * 1000000;
}

int main() {
    int opcao;
    double valor, resultado;

    printf("Conversor de Unidades de Volume\n");
    printf("1 - Litros para Mililitros\n");
    printf("2 - Mililitros para Litros\n");
    printf("3 - Litros para Metros Cúbicos\n");
    printf("4 - Metros Cúbicos para Litros\n");
    printf("5 - Mililitros para Metros Cúbicos\n");
    printf("6 - Metros Cúbicos para Mililitros\n");
    printf("Escolha a opção (1-6): ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1:
            resultado = litroParaMililitro(valor);
            printf("%.2f Litros = %.2f Mililitros\n", valor, resultado);
            break;
        case 2:
            resultado = mililitroParaLitro(valor);
            printf("%.2f Mililitros = %.2f Litros\n", valor, resultado);
            break;
        case 3:
            resultado = litroParaMetroCubico(valor);
            printf("%.2f Litros = %.2f Metros Cúbicos\n", valor, resultado);
            break;
        case 4:
            resultado = metroCubicoParaLitro(valor);
            printf("%.2f Metros Cúbicos = %.2f Litros\n", valor, resultado);
            break;
        case 5:
            resultado = mililitroParaMetroCubico(valor);
            printf("%.2f Mililitros = %.6f Metros Cúbicos\n", valor, resultado);
            break;
        case 6:
            resultado = metroCubicoParaMililitro(valor);
            printf("%.2f Metros Cúbicos = %.2f Mililitros\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
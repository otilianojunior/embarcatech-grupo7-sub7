#include <stdio.h>

// Funções de conversão
float kgToGrams(float kg) {
    return kg * 1000.0;
}

float kgToTons(float kg) {
    return kg / 1000.0;
}

float gramsToKg(float grams) {
    return grams / 1000.0;
}

float gramsToTons(float grams) {
    return grams / 1e6;
}

float tonsToKg(float tons) {
    return tons * 1000.0;
}

float tonsToGrams(float tons) {
    return tons * 1e6;
}

// Função principal do conversor de massa
void executarConversorMassa() {
    int opcaoOrigem, opcaoDestino;
    float massa, resultado;

    // Menu de opções
    printf("=== CONVERSOR DE MASSA ===\n");
    printf("Selecione a unidade de massa de origem:\n");
    printf("1 - Quilogramas (kg)\n");
    printf("2 - Gramas (g)\n");
    printf("3 - Toneladas (t)\n");
    printf("Opção: ");
    scanf("%d", &opcaoOrigem);

    printf("\nSelecione a unidade de massa de destino:\n");
    printf("1 - Quilogramas (kg)\n");
    printf("2 - Gramas (g)\n");
    printf("3 - Toneladas (t)\n");
    printf("Opção: ");
    scanf("%d", &opcaoDestino);

    printf("\nDigite o valor da massa: ");
    scanf("%f", &massa);

    // Lógica de conversão
    if (opcaoOrigem == 1) { // Origem: Quilogramas
        if (opcaoDestino == 1)
            resultado = massa;
        else if (opcaoDestino == 2)
            resultado = kgToGrams(massa);
        else if (opcaoDestino == 3)
            resultado = kgToTons(massa);
        else
            printf("Opção de destino inválida!\n");
    } else if (opcaoOrigem == 2) { // Origem: Gramas
        if (opcaoDestino == 1)
            resultado = gramsToKg(massa);
        else if (opcaoDestino == 2)
            resultado = massa;
        else if (opcaoDestino == 3)
            resultado = gramsToTons(massa);
        else
            printf("Opção de destino inválida!\n");
    } else if (opcaoOrigem == 3) { // Origem: Toneladas
        if (opcaoDestino == 1)
            resultado = tonsToKg(massa);
        else if (opcaoDestino == 2)
            resultado = tonsToGrams(massa);
        else if (opcaoDestino == 3)
            resultado = massa;
        else
            printf("Opcao de destino inválida!\n");
    } else {
        printf("Opcao de origem inválida!\n");
        return;
    }

    // Exibição do resultado
    printf("\nMassa convertida: %.2f\n", resultado);
}

int main() {
    executarConversorMassa();
    return 0;
}

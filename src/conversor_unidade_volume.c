#include <stdio.h>

// Estrutura para mapear as conversões
typedef struct {
    const char *descricao;
    double fator; // Fator de conversão (multiplicativo ou divisivo)
    int inverso;  // Define se é uma conversão direta (0) ou inversa (1)
} Conversao;

// Tabela de conversões
const Conversao conversoes[] = {
    {"Litros para Mililitros", 1000.0, 0},
    {"Mililitros para Litros", 1000.0, 1},
    {"Litros para Metros Cúbicos", 1000.0, 1},
    {"Metros Cúbicos para Litros", 1000.0, 0},
    {"Mililitros para Metros Cúbicos", 1000000.0, 1},
    {"Metros Cúbicos para Mililitros", 1000000.0, 0},
};

// Número total de conversões disponíveis
#define TOTAL_CONVERSOES (sizeof(conversoes) / sizeof(conversoes[0]))

// Função para realizar a conversão
double converter(double valor, double fator, int inverso) {
    return inverso ? valor / fator : valor * fator;
}

int main() {
    int opcao;
    double valor, resultado;

    // Exibição do menu
    printf("=== Conversor de Unidades de Volume ===\n");
    for (int i = 0; i < TOTAL_CONVERSOES; i++) {
        printf("%d - %s\n", i + 1, conversoes[i].descricao);
    }
    printf("Escolha a opção (1-%d): ", TOTAL_CONVERSOES);
    scanf("%d", &opcao);

    // Validação da opção escolhida
    if (opcao < 1 || opcao > TOTAL_CONVERSOES) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Solicitação do valor para conversão
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    // Realiza a conversão
    const Conversao *c = &conversoes[opcao - 1];
    resultado = converter(valor, c->fator, c->inverso);

    // Exibe o resultado
    printf("Resultado: %.6f\n", resultado);

    return 0;
}

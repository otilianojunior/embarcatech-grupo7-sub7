#include <stdio.h>

int main() {
    float valor, resultado;
    int escolhaInicial, escolhaFinal;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Escolha a unidade de medida inicial:\n");
    printf("1. Metros\n");
    printf("2. Centímetros\n");
    printf("3. Milímetros\n");
    scanf("%d", &escolhaInicial);

    printf("Escolha a unidade de medida para conversão:\n");
    printf("1. Metros\n");
    printf("2. Centímetros\n");
    printf("3. Milímetros\n");
    scanf("%d", &escolhaFinal);

    switch (escolhaInicial) {
        case 1: // Convertendo de metros
            switch (escolhaFinal) {
                case 2:
                    resultado = valor * 100;
                    break;
                case 3:
                    resultado = valor * 1000;
                    break;
            }
            break;
        case 2: // Convertendo de centímetros
            switch (escolhaFinal) {
                case 1:
                    resultado = valor / 100;
                    break;
                case 3:
                    resultado = valor * 10;
                    break;
            }
            break;
        case 3: // Convertendo de milímetros
            switch (escolhaFinal) {
                case 1:
                    resultado = valor / 1000;
                    break;
                case 2:
                    resultado = valor / 10;
                    break;
            }
            break;
        default:
            printf("Opção inválida.\n");
            return 1; // Indica erro
    }

    printf("%.2f %s equivalem a %.2f %s.\n", valor, (escolhaInicial == 1 ? "metros" : escolhaInicial == 2 ? "centímetros" : "milímetros"), 
           resultado, (escolhaFinal == 1 ? "metros" : escolhaFinal == 2 ? "centímetros" : "milímetros"));

    return 0;    
}
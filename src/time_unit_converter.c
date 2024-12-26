#include <stdio.h>

#define SECONDS_TO_MINUTES 60
#define MINUTES_TO_HOURS 60
#define HOURS_TO_SECONDS 3600

int main() {
    int fromOption, toOption;
    double inputValue, result;

    printf("Conversor de Unidades de Tempo\n");
    printf("Escolha a unidade inicial:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    printf("Digite a opção: ");
    scanf(" %d", &fromOption);

    printf("Digite o valor a ser convertido: ");
    scanf(" %lf", &inputValue);

    printf("Escolha a unidade de destino:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    printf("Digite a opção: ");
    scanf(" %d", &toOption);

    switch (fromOption) {
        case 1:
            switch (toOption) {
                case 2:
                    result = inputValue / SECONDS_TO_MINUTES;
                    break;
                case 3:
                    result = inputValue / HOURS_TO_SECONDS;
                    break;
                case 1:
                    result = inputValue;
                    break;
                default:
                    printf("Unidade de destino inválida!\n");
                    return 1;
            }
            break;
        case 2:
            switch (toOption) {
                case 1:
                    result = inputValue * SECONDS_TO_MINUTES;
                    break;
                case 3:
                    result = inputValue / MINUTES_TO_HOURS;
                    break;
                case 2:
                    result = inputValue;
                    break;
                default:
                    printf("Unidade de destino inválida!\n");
                    return 1;
            }
            break;
        case 3:
            switch (toOption) {
                case 1:
                    result = inputValue * HOURS_TO_SECONDS;
                    break;
                case 2:
                    result = inputValue * MINUTES_TO_HOURS;
                    break;
                case 3:
                    result = inputValue;
                    break;
                default:
                    printf("Unidade de destino inválida!\n");
                    return 1;
            }
            break;
        default:
            printf("Unidade inicial inválida!\n");
            return 1;
    }

    printf("Resultado: %.2f\n", result);

    return 0;
}

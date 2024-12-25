#include <stdio.h>
#include <stdlib.h>

// Incluindo os headers de conversão
#include "include/conversor_unidade_comprimento.h"
#include "include/conversor_temperatura.h"
#include "include/conversor_bits.h"
#include "include/conversor_potencia_eletrica.h"

// Exibe menu de opções
void exibirMenu()
{
    printf("\n=== Conversor de Unidades ===\n");
    printf("1 - Conversor de Unidade de Comprimento\n");
    printf("2 - Conversor de Temperatura\n");
    printf("3 - Conversor de Bits\n");
    printf("4 - Conversor de Potência Elétrica\n");
    printf("0 - Sair\n");
    printf("=============================\n");
    printf("Escolha uma opção: ");
}

// Função principal para interagir com os conversores
int main()
{
    int opcao;

    do
    {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            executarConversorComprimento();
            break;
        case 2:
            executarConversorTemperatura();
            break;
        case 3:
            executarConversorBits();
            break;
        case 4:
            executarConversorPotenciaEletrica();
            break;
        case 0:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Incluindo os headers de conversão
#include "include/conversor_unidade_comprimento.h"
#include "include/conversor_unidade_massa.h"
#include "include/conversor_unidade_volume.h"
#include "include/conversor_temperatura.h"
#include "include/conversor_unidade_velocidade.h"
#include "include/conversor_potencia_eletrica.h"
#include "include/conversor_unidade_area.h"
#include "include/conversor_unidade_tempo.h"
#include "include/conversor_bits.h"


// Exibe menu de opções
void exibirMenu()
{
    printf("\n=== Conversor de Unidades ===\n");
    printf("1 - Conversor Unidade de Comprimento\n");
    printf("2 - Conversor Unidade de Massa\n");
    printf("3 - Conversor Unidade de Volume\n");
    printf("4 - Conversor Unidade de Temperatura\n");
    printf("5 - Conversor unidade de Velocidade\n");
    printf("6 - Conversor de Potência Elétrica\n");
    printf("7 - Conversor Unidade de Área\n");
    printf("8 - Conversor Unidade de Tempo\n");
    printf("9 - Conversor Unidade de Bits\n");
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
            executarConversorMassa();
            break;
        case 3:
            executarConversorVolume();
            break;
        case 4:
            executarConversorTemperatura();
            break;
        case 5:
            executarConversorVelocidade();
            break;
        case 6:
            executarConversorArea();
            break;
        case 7:
            executarConversorPotenciaEletrica();
            break;
        case 8:
            executarConversorTempo();
            break;
        case 9:
            executarConversorBits();
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

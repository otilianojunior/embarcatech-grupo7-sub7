#ifndef CONVERSOR_UNIDADE_VOLUME_H
#define CONVERSOR_UNIDADE_VOLUME_H

// Constantes para conversão de unidades de volume
#define LITROS_POR_MILILITRO 1000
#define MILILITROS_POR_LITRO 0.001
#define LITROS_POR_METRO_CUBICO 0.001
#define METROS_CUBICOS_POR_LITRO 1000
#define MILILITROS_POR_METRO_CUBICO 1e-6
#define METROS_CUBICOS_POR_MILILITRO 1e6

// Declaração das funções de conversão de unidades de volume
double litroParaMililitro(double litros);
double mililitroParaLitro(double mililitros);
double litroParaMetroCubico(double litros);
double metroCubicoParaLitro(double metrosCubicos);
double mililitroParaMetroCubico(double mililitros);
double metroCubicoParaMililitro(double metrosCubicos);

// Função para executar o conversor de unidades de volume
void executarConversorVolume();

#endif

#include <stdio.h>

// Funções para conversão de temperaturas
float celsiusToFahrenheit(float celsius)
{
  return (celsius * 9.0 / 5.0) + 32;
}

float celsiusToKelvin(float celsius)
{
  return celsius + 273.15;
}

float fahrenheitToCelsius(float fahrenheit)
{
  return (fahrenheit - 32) * 5.0 / 9.0;
}

float fahrenheitToKelvin(float fahrenheit)
{
  return celsiusToKelvin(fahrenheitToCelsius(fahrenheit));
}

float kelvinToCelsius(float kelvin)
{
  return kelvin - 273.15;
}

float kelvinToFahrenheit(float kelvin)
{
  return celsiusToFahrenheit(kelvinToCelsius(kelvin));
}

int main()
{
  int opcaoOrigem, opcaoDestino;
  float temperatura, resultado;

  // Menu de opções
  printf("Selecione a unidade de temperatura de origem:\n");
  printf("1 - Celsius\n");
  printf("2 - Fahrenheit\n");
  printf("3 - Kelvin\n");
  printf("Opção: ");
  scanf("%d", &opcaoOrigem);

  printf("\nSelecione a unidade de temperatura de destino:\n");
  printf("1 - Celsius\n");
  printf("2 - Fahrenheit\n");
  printf("3 - Kelvin\n");
  printf("Opção: ");
  scanf("%d", &opcaoDestino);

  printf("\nDigite o valor da temperatura: ");
  scanf("%f", &temperatura);

  // Lógica de conversão
  if (opcaoOrigem == 1)
  { // Origem: Celsius
    if (opcaoDestino == 1)
      resultado = temperatura;
    else if (opcaoDestino == 2)
      resultado = celsiusToFahrenheit(temperatura);
    else if (opcaoDestino == 3)
      resultado = celsiusToKelvin(temperatura);
    else
      printf("Opção de destino inválida!\n");
  }
  else if (opcaoOrigem == 2)
  { // Origem: Fahrenheit
    if (opcaoDestino == 1)
      resultado = fahrenheitToCelsius(temperatura);
    else if (opcaoDestino == 2)
      resultado = temperatura;
    else if (opcaoDestino == 3)
      resultado = fahrenheitToKelvin(temperatura);
    else
      printf("Opção de destino inválida!\n");
  }
  else if (opcaoOrigem == 3)
  { // Origem: Kelvin
    if (opcaoDestino == 1)
      resultado = kelvinToCelsius(temperatura);
    else if (opcaoDestino == 2)
      resultado = kelvinToFahrenheit(temperatura);
    else if (opcaoDestino == 3)
      resultado = temperatura;
    else
      printf("Opção de destino inválida!\n");
  }
  else
  {
    printf("Opção de origem inválida!\n");
    return 1;
  }

  // Exibição do resultado
  printf("\nTemperatura convertida: %.2f\n", resultado);

  return 0;
}

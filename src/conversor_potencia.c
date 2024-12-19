#include <stdio.h>

int main()
{
    float valor;
    float potencia;
    float potencia_convertida;
    
    printf("Digite a potencia em Watts\n");
    scanf("%f",&potencia);
    
    printf("Agora indique a conversao\n");
    printf("Digite 1 para converter Watts em kW e 2 para converter Watts em cavalos-vapor (CV)\n");
    scanf("%f",&valor);
    
        if(valor==1){
            
           potencia_convertida = (potencia/1000);
            
            printf("\nA potencia corresponde a %.3f kW\n",potencia_convertida);
            
        }else if(valor==2){
            
            potencia_convertida = (potencia/745.699872);
            
             printf("\nA potencia corresponde a %.3f CV\n",potencia_convertida);
            
        }else printf("Por favor, rode o codigo novamente e indique um valor para de potencia e selecione 1 ou 2 para conversao");
        
    return 0;
}
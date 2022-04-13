/******************************************************************************

Faça um programa em C que dada uma distancia em km converta e exiba em 
milhas, onde 1Milha = 1,60934km

*******************************************************************************/
#include <stdio.h>
int main()
{
    float n1, valor;

    printf("Digite a distância em KM:");
    scanf("%f", &n1);
    
    valor = n1 / 1.60934;
    printf("Valor em milhas= %f", valor);
    
    return 0;
}



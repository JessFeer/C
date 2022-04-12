/******************************************************************************

Faça um programa em C que leia Três valores: Distancia em km, Velocidade Media 
e consumo de Combustível de um carro, calcule o tempo de viagem e quantos litros 
de combustível serão necessários para completar a viagem.

*******************************************************************************/
#include <stdio.h>
int main()
{
    // Declaração de variáveis
    float distancia,     
    tempo,              
    velocidade,  
    qtd_combustivel,
    litros_usados;    
    
    // Entrada de dados
    printf("Digite a distância em KM:");
    scanf("%f", &distancia);
    printf("Digite a velocidade média KM/h:");
    scanf("%f", &velocidade);
    printf("Digite o consumo de combustível KM/l:");
    scanf("%f", &litros_usados);
    
    // Processamento de dados
    tempo = distancia / velocidade;
    qtd_combustivel = distancia / litros_usados;
    
    // Saida de dados
    printf("\nTempo de viagem = %.2f h \n", tempo);
    printf("Combustível necessário= %.2f l", qtd_combustivel);
    
    
    return 0;
}


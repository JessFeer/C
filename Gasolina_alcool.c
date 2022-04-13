/******************************************************************************

Crie um algoritmo que informe dois valores reais, valor em reais do litro da 
gasolina e valor em reais do litro do álcool, calcule os 70% do valor da gasolina
para definir na tela qual combustível e o mais vantajoso, sabendo que o valor do 
álcool para ser mais vantajoso deve ser menor que 70% do valor da gasolina.

*******************************************************************************/
#include <stdio.h>
int main()

{

float v1, v2, v3;

printf("Informe o valor do litro da gasolina: ");
scanf("%f", &v1);
printf("Informe o valor do litro do álcool: ");
scanf("%f", &v2);

v3 = (v1*0.7);

if(v2 < v3){
    printf("O valor do alcool é mais vantajoso");}

else{
    printf("O valor da gasolina é mais vantajoso");}

return 0;
}
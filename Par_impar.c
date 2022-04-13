/******************************************************************************

Faça um algoritmo que receba um número inteiro, identifique se este e par ou impar, 
utilize o modulo de 2 para calcular o resto da divisão, se o resto da divisão 
for zero (o número e par) caso o resto da divisão for 1 (o número e impar) 
resto = numero % 2;

*******************************************************************************/
#include <stdio.h>
int main(){

int numero, resto;

printf("Informe um número: ");
scanf("%i", & numero);

resto = numero%2;

 if(resto == 1){
    printf("O número é impar");}

else{
    printf("O número é par");}

return 0;

}


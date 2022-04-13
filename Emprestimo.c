/******************************************************************************

Leia o salario de um trabalhador e o valor da prestação de um empréstimo. 
Se a prestação for maior que 20% do salario imprima: Empréstimo não concedido, 
caso contrario imprima: Empréstimo concedido.

*******************************************************************************/
#include <stdio.h>
int main(){

float v1, v2;

printf("informe seu salário: "); scanf("%f", &v1);
printf("informe o valor da prestação: "); scanf("%f", &v2);

if(v2 > v1 * 0.2){
    printf("Empréstimo não concedido!");}
else{
    printf("Empréstimo concedido!");}

return 0;
}
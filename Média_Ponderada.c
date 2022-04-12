/******************************************************************************

3.	Faça um programa em C que calcule a media ponderada de 3 números reais 
(A,B e C)  mostre o resultado onde os pesos serão (2,3,5).

*******************************************************************************/
#include <stdio.h>

int main(){

    float n1, n2, n3, mp;

    printf("Informe um valor para n1:");
    scanf("%f", &n1);
    printf("Informe um valor para n2:");
    scanf("%f", &n2);
    printf("Informe um valor para n3:");
    scanf("%f", &n3);
    
    mp = ((n1*2) + (n2*3) + (n3*5)) / 10;
    printf("Media Ponderada= %f", mp);
    
    return 0;
}

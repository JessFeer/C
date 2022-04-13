/******************************************************************************

Faça um algoritmo que calcule a media ponderada das notas de 3 provas. 
A primeira e a segunda prova tem peso 1 e a terceira tem peso 2. 
Ao final, mostrar a media do aluno e indicar se o aluno foi aprovado ou reprovado. 
A nota para aprovação deve ser igual ou superior a 60 pontos.

*******************************************************************************/
#include <stdio.h>
int main(){

float n1, n2, n3, mp;

printf("Informe um valor para nota 1:"); scanf("%f", &n1);

printf("Informe um valor para nota 2:"); scanf("%f", &n2);

printf("Informe um valor para nota 3:"); scanf("%f", &n3);

mp=((n1*1)+(n2*1)+(n3*2))/4;

if(mp>=6){
    printf("\nAprovado");}

else{
    printf("\nReprovado!");}

return 0;
}
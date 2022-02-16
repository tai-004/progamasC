#include<stdio.h>
int main(){
//Faça um programa que recebe notas de N alunos (2 notas para cada aluno)
//mostra a média de cada aluno.
int qua, i;
float med, n1, n2;
printf("quantos alunos vao ser: \n");
scanf("%i", &qua);
for(i=0; i<qua; i++){
printf("\n Digite uma nota: \n");
scanf("%f", &n1);
printf("\n Digite a outra nota: \n");
scanf("%f", &n2);
med = (n1+n2)/2;
printf("\n sua media e:%f \n", med);
}
}

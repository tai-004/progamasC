#include<stdio.h>
    int main(){
    //Faça um programa que recebe N números inteiros
    //calcula a soma dos números digitados
    //seguida mostra se o a soma dos números é par ou ímpar.
    int qua, soma, num, i;
    printf("quantos vao ser os numeros: \n");
    scanf("%i", &qua);
    for(i=0, soma=0; i<qua; i++){
    printf("\n Digite o numero: \n");
    scanf("%i", &num);
    soma=soma+num;
    }
    printf("\n sua soma e: %i \n", soma);
    if (soma%2 == 0){
    printf("Sua soma e par\n");
    }
    else{
    printf("Sua soma e impar\n");
    }
    }

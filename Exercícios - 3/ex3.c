/*
Escreva um programa que peça ao usuário para digitar dois números inteiros e imprima se o primeiro número é maior que o segundo número.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int num1, num2;

    printf("Digite o primeiro numero:");
    scanf("%d",&num1);
    printf("\nDigite o segundo numero:");
    scanf("%d",&num2);

    printf("O numero %d e maior que o numero %d,V=0 e F=1 (%d)", num1,num2,num1<num2);


    return 0;
}


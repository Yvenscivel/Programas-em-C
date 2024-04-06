/*
Escreva um programa que peça ao usuário para digitar um número inteiro e verifique se o número é positivo, negativo ou zero.
*/

#include<stdio.h>

int main(){

    int num1;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num1);

    printf("0 = Falso, 1 = Verdade\n");
    printf("Positivo %d\n", num1>0);
    printf("Negativo %d\n", num1<0);
    printf("Zero %d", num1==0);


    return 0;

}
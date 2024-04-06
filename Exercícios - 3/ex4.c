/*
Escreva um programa que peça ao usuário para digitar um número inteiro e imprima se o número é par ou ímpar.
*/

#include<stdio.h>


int main(){

    int num1;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num1);
    printf("impar = 0, par = 1 \nresultado(%d)",num1%2==0);
    
    return 0;

}

/*
Faça um programa em C que leia e imprima um número inteiro
*/

#include<stdio.h>

int main(){

    int numero;

    printf("Digite um numero para aparecer na sua tela: ");
    scanf("%d",&numero);
    printf("O numero que voce escolheu foi %d",numero);
    return 0;
}
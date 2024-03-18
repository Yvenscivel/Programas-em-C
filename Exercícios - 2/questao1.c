/*
Faça um programa em C que leia imprima o seu nome
*/

#include<stdio.h>

int main(){

    char nome[50];

    printf("Qual o seu nome?");
    scanf("%s", nome);
    printf("Seu nome e %s", nome);

    return 0;

}
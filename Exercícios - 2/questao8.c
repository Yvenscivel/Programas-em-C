/*
Escreva um programa que recebe os valores de altura e largura para
calcula a área de um retângulo.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int altura;
    int largura;
    int area;

    printf("Qual o valor da altura do retangulo? ");
    scanf("%d",&altura);
    printf("Qual o valor da largura do retangulo? ");
    scanf("%d",&largura);

    area = altura * largura;
    printf("A area do retangulo e de: %d",area);
    return 0;
}
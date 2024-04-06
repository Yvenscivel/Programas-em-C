/*
Escreva um programa que calcule a média aritmética de 3 valores inteiros e imprima o resultado.
*/

#include<stdio.h>

int main(){

    float num1, num2, num3,media;
    
    printf("Escolha o primeiro numero: ");
    scanf("%f",&num1);
    printf("Escolha o segundo numero: ");
    scanf("%f",&num2);
    printf("Escolha o terceiro numero: ");
    scanf("%f",&num3);

    media = (num1+num2+num3)/3;

    printf("a media aritmetica dos valores e de %.2f",media);
    
    return 0;

}

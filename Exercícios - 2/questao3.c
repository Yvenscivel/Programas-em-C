/*
Faça um programa em C que leia dois números reais e os imprima
*/

#include<stdio.h>

int main(){

    float num1, num2, soma;
    
    printf("Digite um numero real: ");
    scanf("%f",&num1);

    printf("Digite outro numero real: ");
    scanf("%f",&num2);

    soma = num1 + num2;

    printf("A soma desses numeros e de %.2f",soma);

    return 0;
}
/*
Faça um programa em C que receba dois números inteiros e ao final imprima a
soma deles
*/

#include<stdio.h>

int main(){
    int num1, num2, soma;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;

    printf("A soma dos dois numeros e de: %d",soma);
    return 0;


}

/*
Faça um programa em C que leia dois números reais e calcule as quatro
operações básicas entre estes dois números, adição, subtração,
multiplicação e divisão. Ao final, o programa deve imprimir os resultados
dos cálculos
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float num1;
    float num2;
    float soma;
    float subtracao;
    float multiplicacao;
    float divisao;

    printf("Digite o primeiro numero real: ");
    scanf("%f",&num1);
    printf("Digite o segundo numero real: ");
    scanf("%f",&num2);
    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("O resultado da soma e %.2f",soma);
    printf("\nO resultado da subtracao e %.2f",subtracao);
    printf("\nO resultado da multiplicacao e %.2f",multiplicacao);
    printf("\nO resultado da divisao e %.2f",divisao);

    return 0;
}
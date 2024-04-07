/*
Escreva um programa em C que leia 2 números inteiros e imprima o maior
*/

#include<stdio.h>

int main(){
    
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
        printf("Primeiro numero e maior que o segundo numero");

    else if(num1 == num2)
        printf("Ambos os numeros sao iguais");
    
    else
        printf("Segundo numero e maior que o primeiro numero");

    return 0; 
}

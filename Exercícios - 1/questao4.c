/*
Escreva um programa em C que faz uma pergunta ao usuário "quantos anos você tem?"espera que o usuário entre com uma resposta numérica através do teclado e finaliza com um comentário sobre a idade do usuário.
*/

#include<stdio.h>

int main(){
    int idade;

    printf("Quantos anos voce tem? ");
    scanf("%d",&idade);
    printf("Voce tem %d anos",idade);
    return 0;

}
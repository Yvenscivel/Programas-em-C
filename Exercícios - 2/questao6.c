/*
Escreva um programa em C que declare e inicialize as seguintes variáveis:
idade, altura, letra
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int idade = 19;
    float altura = 1.76;
    char letra ='Y';
       
    printf("A idade declarada e: %d \n",idade);
    printf("A altura declarada e: %.2f \n", altura);
    printf("A letra declarada e: %c",letra);

    return 0;
}
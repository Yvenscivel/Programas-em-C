/*
2- Faça um programa que imprima na primeira linha seu nome, na segunda
sua idade e na terceira sua altura.
*/

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguse_Brazil");

    printf("Meu nome e Yvens\n");
    printf("Minha idade e de 19 anos\n");
    printf("Minha altura e de 1.76m");

    return 0;
}

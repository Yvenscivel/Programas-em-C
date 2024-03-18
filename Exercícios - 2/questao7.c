/*

Escreva um programa que recebe 2 valores a e b, e troque esses valores,
de modo que, no fim da execução, b possua o valor de a e vice-versa

*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a,b;

    printf("Escolha o valor de A:");
    scanf("%d",&a);

    printf("Escolha o valor de B:");
    scanf("%d",&b);

    printf("O valor de A agora e %d e o valor de B agora e %d",b,a);
   

    return 0;
}
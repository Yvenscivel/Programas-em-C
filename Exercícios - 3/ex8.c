/*
Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
*/

#include<stdio.h>

int main(){

    float real, valor;

    printf("Digite o valor em reais: ");
    scanf("%f", &real);

    valor = real/5;

    printf("%.2fR$ e equivalente a %.2f$", real, valor);


    return 0;
}
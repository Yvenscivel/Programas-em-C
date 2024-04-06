/*
Faça um programa que leia e diga os valores de uma equação de segundo grau
*/

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float x1, x2, delta;

    printf("Digite o valor de a:\n");
    scanf("%f", &a);
    printf("Digite o valor de b:\n");
    scanf("%f", &b);
    printf("Digite o valor de c:\n");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);

    printf("O valor de Delta = %.2f\n", delta);
    printf("O valor do X1 = %.2f\n", x1);
    printf("O valor do X2 = %.2f", x2);
    
    return 0;
}
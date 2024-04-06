/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A 
fórmula de conversão é:  K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura 
em Kelvin.
*/

#include<stdio.h>

int main(){

    int graus, kelvin;

    printf("Digite a temperatura em Celcius para ser convertida em kelvin: ");
    scanf("%d",&graus);

    kelvin = graus + 273.15;

    printf("%dc para kelvin fica: %dk", graus, kelvin);

    return 0;
}
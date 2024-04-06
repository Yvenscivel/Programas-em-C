/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A 
fórmula de conversão é: F = (C∗ 9.0 / 5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a 
temperatura em Celsius.
*/

#include<stdio.h>

int main(){
    int graus, fahrenheit;

    printf("Digite a temperatura em Celcius para ser convertida em Fahrenheit: ");
    scanf("%d",&graus);

    fahrenheit = (graus * 9.0 / 5.0) + 32.0;
    
    printf("%dC para fahrenheit fica: %df", graus, fahrenheit);

    return 0;
}
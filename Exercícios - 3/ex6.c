/*
Faça um programa em C que calcule o valor de uma prestação em atraso. Para isso, o 
programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de 
atraso. Ao final, o programa deve imprimir o valor da prestação atrasada, o período de 
atraso, os juros que serão cobrados pelo período de atraso, o valor da prestação acrescido 
dos juros. Considere juros simples.
*/


#include <stdio.h>

int main() {
    float prestacao_vencida, taxa_juros, prestacao_atrasada, juros, valor_total;
    int periodo_atraso;

    printf("Digite o valor da prestacao vencida: ");
    scanf("%f", &prestacao_vencida);

    printf("Digite a taxa de juros (em decimal): ");
    scanf("%f", &taxa_juros);

    printf("Digite o periodo de atraso (em meses): ");
    scanf("%d", &periodo_atraso);

    juros = prestacao_vencida * taxa_juros * periodo_atraso;
    prestacao_atrasada = prestacao_vencida + juros;
    
    printf("\nValor da prestacao atrasada: R$ %.2f\n", prestacao_atrasada);
    printf("Periodo de atraso: %d meses\n", periodo_atraso);
    printf("Juros cobrados pelo periodo de atraso: R$ %.2f\n", juros);
    printf("Valor da prestacao acrescido dos juros: R$ %.2f\n", prestacao_atrasada);

    return 0;
}

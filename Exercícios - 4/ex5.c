/*
Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação 
escolhida. Escreva uma mensagem de erro se a opção for invalida

Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
*/

#include<stdio.h>

int main(){

    int opcao;
    float num1, num2, resultado;
    
    printf("**************************************************************\n");
    printf("Escolha a opcao:\n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3- Produto entre 2 numeros.\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    printf("Opcao: ");
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
            printf("Digite dois numeros para soma: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 + num2;
            printf("O resultado e: %.1f",resultado);
        break;

        case 2:
            printf("Digite dois numeros para a diferenca entre eles: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 - num2;
            printf("O resultado e: %.1f",resultado);
        break;

        case 3:
            printf("Digite dois numeros para soma: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 * num2;
            printf("O resultado e: %.1f",resultado);
        break;

        case 4:
            printf("Digite dois numeros para soma: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 / num2;
            printf("O resultado e: %.1f",resultado);
        break;
    }
    
    return 0;
}
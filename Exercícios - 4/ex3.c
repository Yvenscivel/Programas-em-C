/*
Escreva um programa que mostre na tela um menu de pratos (pelo menos 5), cada um
associado a um número.
Prato 1 – Miojo
Prato 2 – Ensopado
Quando um número é selecionado, o programa deve exibir uma breve descrição do prato.
Por exemplo, ao digitar 1, o programa mostra: “Macarrão instantâneo”
*/

#include<stdio.h>

int main(){

    int teste;

    printf("Cardapio\n");
    printf("1- Miojo \n");
    printf("2- Ensopado \n");
    printf("3- Salada\n");
    printf("4- Sanduiche\n");
    printf("5- Suco de morango\n");
    printf("Digite o numero correspondente ao prato: \n");
    scanf("%d", &teste);

    switch (teste)
    {
    case 1:
        printf("Miojo e um macarrao instantaneo");
    break;
    case 2:
        printf("Ensopado de carne com macarrao");
    break;
    case 3:
        printf("Salada com frutas");
    break;
    case 4:
        printf("Sanduiche com verduras");
    break;
    case 5:
        printf("Suco da polpa de morango");
    break;
    
    default:
        printf("O produto nao esta no cardapio");
    }
    
    return 0;
}
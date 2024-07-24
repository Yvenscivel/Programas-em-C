/*
Escreva um procedimento (função sem valor de retorno) em Linguagem C (chamado media) que calcula calcule a média aritmética de 3 valores inteiros, exibindo os resultados na tela conforme os valores especificados para a saída.
O seu procedimento deverá seguir a estrutura do exemplo abaixo:

void media(int a, int b, int c){
    // sua solução aqui

    return;

}

A seguir, observe os valores de entrada para o seu procedimento e o que será exibido na tela como saída:

For example:

Test	
media(2,2,2);

Result
A média = 2
*/


#include<stdio.h>

void media(int a, int b, int c){

    int media = ((a + b + c)/3);
    printf("A média = %d", media);
    

    return;
}

int main(){
    media(2,2,2);

    return 0;
}
/*
Escreva uma procedimento (função sem valor de retorno) em Linguagem C (chamada calculaModulo) que recebe um número E calcula o módulo desse número.

void calculaModulo(int numero){
    // sua solução aqui

}

A seguir, observe os valores de entrada para o seu procedimento e o que será exibido na tela como saída:

For example:

Test		
calculamodulo(-8);

Input
-8

Result
8
*/

#include<stdio.h>

void calculaModulo(int numero){
    int modulo;
    if (numero >= 0){
        modulo = numero;
    }

    else{
        modulo = numero * -1;
    }


    printf("%d", modulo);
    return;
}

int main(){
    calculaModulo(-8);
    return 0;
}
/*
Escreva um procedimento (função sem valor de retorno) em Linguagem C (chamado restoDaDivisao) que receba um número n,  e imprima na tela uma mensagem informando se o resto da divisão de n por 3 é igual a 1 e também se n é divisível por 5
O seu procedimento deverá seguir a estrutura do exemplo abaixo:

void restoDaDivisao (int n){
    // sua solução aqui

}

A seguir, observe os valores de entrada para o seu procedimento e o que será exibido na tela como saída:


For example:

Test		
restoDaDivisao(10);

Input
10

Result
O resto da divisão de 10 por 3 é igual a 1
10 é divisível por 5
*/


#include<stdio.h>

void restoDaDivisao (int n){

    int resto_divisao = n%3;

    if (n % 5 == 0){
        printf("O resto da divisão de %d por 3 é igual a %d \n",n, resto_divisao);
        printf("%d é divisível por 5\n",n);
    }
    else{
        printf("O resto da divisão de %d por 3 é igual a %d \n",n, resto_divisao);
        printf("%d não é divisível por 5\n",n);
    }

}

int main(){
    restoDaDivisao(20);

    return 0;
}
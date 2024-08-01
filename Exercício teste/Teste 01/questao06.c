/*
Escreva um procedimento (função sem valor de retorno) em Linguagem C (chamado troca_valores) que recebe dois valores inteiros nas variáveis x e y e troque o conteúdo das variáveis. Faça este problema usando apenas x e y como variáveis.


O seu procedimento deverá seguir a estrutura do exemplo abaixo:
void troca_valores(int x, int y){
    // sua solução aqui

    return;

}

A seguir, observe os valores de entrada para o seu procedimento e o que será exibido na tela como saída:


For example:

Test	
troca_valores(5, 10);

Result
Valores depois da troca:
x: 10
y: 5
*/


#include<stdio.h>

void troca_valores(int x, int y){


    printf("Valores depois da troca:\n");
    printf("x: %d\n", y);
    printf("y: %d\n", x);
    

    return;
}

int main(){
    troca_valores(5,10);

    return 0;
}
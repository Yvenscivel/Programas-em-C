/*
Escreva um procedimento (função sem valor de retorno) em Linguagem C (chamado raizes) que calcula as raízes de uma Equação do Segundo Grau, exibindo os resultados na tela conforme os valores especificados para a saída.
O seu procedimento deverá seguir a estrutura do exemplo abaixo:

void raizes (int a, int b, int c){
    // sua solução aqui
    return;
}
A seguir, observe os valores de entrada para o seu procedimento e o que será exibido na tela como saída:
For example:

Test	Result
raizes(1,-1,-2);
Delta = 9.00
X1 = -1.00
X2 = 2.00

*/

#include <stdio.h>
#include <math.h>

void raizes (int a, int b, int c){

    int delta = pow(b,2) - 4*a*c;

    float x1 = (-b - sqrt(delta)) / (2 * a);
    float x2 = (-b + sqrt(delta)) / (2 * a);

    printf("Delta = %d \n", delta);
    printf("X1 = %f \n", x1);
    printf("X2 = %f", x2);

    return;
}


int main(){
    raizes(1,-1,-2);

    return 0;
}
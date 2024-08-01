/*
Escreva um procedimento (função sem valor de retorno) em Linguagem C (chamado divisao_ganhadores) que recebe a importância de R$ 780.000,00 que será dividida entre três ganhadores de um concurso.

Sendo que da quantia total:

• O primeiro ganhador recebera 46%;

• O segundo recebera 32%;

• O terceiro recebera o restante;

O seu procedimento deverá seguir a estrutura do exemplo abaixo:
void divisao_ganhadores(float valor){
    // sua solução aqui

    return;

}
A seguir, observe os valores de entrada para o seu procedimento e o que será exibido na tela como saída:

For example:

Test	
divisao_ganhadores(780000.00)

Result
O primeiro ganhador receberá: R$ 358800.00
O segundo ganhador receberá: R$ 249600.00
O terceiro ganhador receberá: R$ 171600.00

*/


#include<stdio.h>

void divisao_ganhadores(float valor){

    float ganhador1 = (valor * 0.46);
    float ganhador2 = (valor * 0.32);
    float ganhador3 = (valor * 0.22);

    printf("O primeiro ganhador receberá: R$ %.2f\n",ganhador1);
    printf("O segundo ganhador receberá: R$ %.2f\n",ganhador2);
    printf("O terceiro ganhador receberá: R$ %.2f\n",ganhador3);


    return;
}

int main(){
    divisao_ganhadores(780000.00);

    return 0;
}
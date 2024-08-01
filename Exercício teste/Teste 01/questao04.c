/*
Escreva um procedimento (função sem valor de retorno) em Linguagem C (chamado novos_valores) que dado três valores inteiros nas variáveis x, y e z, e realize a seguinte operação: atribua a x o valor da soma de x e y, a y o valor da diferença entre z e x, e a z o valor da multiplicação entre x e y. Após realizar as operações, exiba os valores atualizados de x, y e z.

O seu procedimento deverá seguir a estrutura do exemplo abaixo:
void novos_valores(int x, int y, int z){
    // sua solução aqui

}

A seguir, observe os valores de entrada para o seu procedimento e o que será exibido na tela como saída:


For example:

Test	
novos_valores(3, 5, 7)

Result
Valores atualizados:
x: 8
y: -1
z: -8

*/

#include <stdio.h>

void novos_valores(int x, int y, int z){

    x = x + y;
    y = z - x; 
    z = x * y;

    printf("Valores atualizados:\n");
    printf("x: %d \n", x);
    printf("y: %d \n", y); 
    printf("z: %d \n", z); 

    return;
}

int main(){

    novos_valores(3,5,7);   

    return 0;
}
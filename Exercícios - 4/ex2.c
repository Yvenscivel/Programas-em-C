/*
Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
número é invalido.
*/

#include<stdio.h>
#include<math.h>

int main(){

    int num1;
    float raiz;

    printf("Digite o numero para ser calculado: ");
    scanf("%d",&num1);

    if (num1>=0)
    {
       raiz = sqrt(num1);
       printf("a raiz quadrada de %d e %f", num1, raiz);
    }
    
    else
    {
        printf("numero invalido");
    }

    return 0;
}
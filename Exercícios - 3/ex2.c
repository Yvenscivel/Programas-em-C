/* 
    Leia dois números A e B e indique se um terceiro número C está entre A e B
*/

#include <stdio.h>

int main(){ 

    int a, b, c;

    printf("Digite o valor de A: \n");
    scanf("%d",&a);
    printf("Digite o valor de B: \n");
    scanf("%d",&b);
    printf("Digite o valor de C: \n");
    scanf("%d",&c);

    printf("C e maior que A %d \n", c>a);
    printf("C e menor que B %d", c<b);


    return 0;
}
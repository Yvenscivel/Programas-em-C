/*
Dada uma letra, escreva na tela se essa letra é ou não uma vogal (pode considerar apenas 
letras minúsculas).
*/

#include<stdio.h>

int main(){
    
    char letra;

    printf("Digite uma letra: ");
    scanf("%c",&letra);

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c e uma vogal", letra);
            break;
        default:
            printf("%c nao e uma vogal", letra);
    }
    
    return 0;
}
/*
Escreva um procedimento (função sem valor de retorno) em Linguagem C (chamado calcula_media) que recebe três notas de um aluno e uma letra. Se a letra for A, calcula a média aritmética das notas do aluno, se for P, calcula a sua média ponderada (pesos: 5, 3 e 2). O seu procedimento deverá seguir a estrutura do exemplo abaixo:

 
void calcula_media (float n1, float n2, float n3, char letra){
    // sua solução aqui

}

For example:

Test		
calcula_media(7.5, 8.0, 6.5,'A');

Input
7.5,8.0,6.5,'A'

Result
7.33

*/

#include<stdio.h>

void calcula_media (float n1, float n2, float n3, char letra){

    float media_arimetica;
    float media_ponderada;

    switch(letra){
        case 'A':
            media_arimetica = (n1 + n2 + n3)/3;
            printf("%.2f", media_arimetica);
        break;

        case 'P':
            media_ponderada = (n1*5 + n2*3 + n3*2)/(5 + 3 + 2);
            printf("%.2f", media_ponderada);
        break;
    }
}

int main(){

    calcula_media(7.5, 8.0, 6.5,'P');

    return 0;
}
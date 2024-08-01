/*
Escreva um procedimento (função sem valor de retorno) em Linguagem C (chamado multiplicar_subtrair) que receba um número inteiro n, e imprima na tela o valor de n multiplicado por 5 se n for positivo e o valor de n subtraído de 3 se n for negativo.
O seu procedimento deverá seguir a estrutura do exemplo abaixo:

void multiplicar_subtrair(int n){
    // sua solução aqui

    return;

}

A seguir, observe os valores de entrada para o seu procedimento e o que será exibido na tela como saída:


For example:
Test	
multiplicar_subtrair(5);

Result
O resultado é: 25


*/


void multiplicar_subtrair(int n){
    
    if(n >= 0){
        int multiplicado = n*5;
        printf("O resultado eh %d",multiplicado);
    }

    else if(n < 0){
        int subtraido = n - 3;
        printf("O resultado eh %d", subtraido);
    }
    else{
        printf("não atendem às condições especificadas.");
    }

    return;

}

int main(){

    multiplicar_subtrair(-5);

    return 0;
}
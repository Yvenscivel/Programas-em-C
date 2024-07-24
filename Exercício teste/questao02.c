/*
Escreva um procedimento (função sem valor de retorno) em Linguagem C (chamado verifica_intervalo) que receba dois números inteiros n1 e n2, e imprima na tela uma mensagem se ocorrer a seguinte situação: se n1 estiver entre 50 e 200 e n2 estiver entre -1 e 9, exibindo os resultados na tela conforme os valores especificados para a saída.
O seu procedimento deverá seguir a estrutura do exemplo abaixo:

void verifica_intervalo(int n1, int n2){
    // sua solução aqui

    return;

}

A seguir, observe os valores de entrada para o seu procedimento e o que será exibido na tela como saída:

For example:

Test	
verifica_intervalo(60, 8);

Result
n1 está entre 50 e 200 e n2 está entre -1 e 9.
*/


void verifica_intervalo(int n1, int n2){
    
    if (n1 > 50 && n1 <200 && n2 > -1 && n2 < 9){
        printf("n1 está entre 50 e 200 e n2 está entre -1 e 9.");
    }
    else{
        printf("n1 e/ou n2 não atendem às condições especificadas.");
    }

    return;

}


int main(){

    verifica_intervalo(10,10);

    return 0;
}
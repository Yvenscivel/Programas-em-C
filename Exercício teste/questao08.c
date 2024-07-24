/*
Muitos bancos possuem o serviço do crédito rotativo do cartão de crédito. Ele é um serviço que pode ser acionado pela pessoa que não pode pagar o valor total da fatura no vencimento, mas não quer ficar inadimplente. Para usar o crédito rotativo, o consumidor paga qualquer valor entre o mínimo e o total da fatura. O restante é lançado no mês seguinte, com juros. Muitos bancos cobram o valor de 3,3% de juros neste serviço. 

Com isso, escreva um procedimento (função sem valor de retorno) em Linguagem C (chamado credito_rotativo ) que recebe o valor usado por um cliente no mês de março, o valor que ele pagou dessa fatura, o valor usado por este cliente no mês de abril e exibe o valor da fatura do mês de abril.


void credito_rotativo (float valor_pago_fatura, float valor_usado_marco, valor_usado_abril){
    // sua solução  }

}

A seguir, observe os valores de entrada para o seu procedimento e o que será exibido na tela como saída:


For example:

Test	
credito_rotativo(500.00, 800.00, 600.00);

Result
Valor da fatura de abril: R$ 909.90
*/


#include<stdio.h>

void credito_rotativo (float valor_pago_fatura, float valor_usado_marco, float valor_usado_abril){
    
    float sobraDeMarco = (valor_usado_marco - valor_pago_fatura);
    float jurosDeMarco = (valor_usado_marco - valor_pago_fatura ) * 0.033;
    float novaFaturaAbril = jurosDeMarco + valor_usado_abril + sobraDeMarco;

    printf("Valor da fatura de abril: R$ %.2f",novaFaturaAbril);

    return;
}

int main(){
    credito_rotativo(500.00, 800.00, 600.00);

    return 0;
}
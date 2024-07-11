#include <stdio.h>

//Variáveis
float precoInicial;
float precoFinal;
char opcao;

//Função que calcula o valor a ser pago
float calculo(float precoInicio, char escolhaUsuario){
    float precoFim;
    if( (precoInicio <= 100) && (escolhaUsuario == 'A') ){ //1º Condição - Desconto 10%
        precoFim = precoInicio * 0.9;
    } else if ( (precoInicio > 100) && (escolhaUsuario == 'A') ) { //2º Condição - Desconto 15%
        precoFim = precoInicio * 0.85;
    } else if ( (precoInicio <= 100) && (escolhaUsuario == 'P') ) { //3º Condição - XX
        precoFim = precoInicio; 
    } else if ( (precoInicio > 100) && (escolhaUsuario == 'P') ) { //4º Condição - Juros 10%
        precoFim = precoInicio * 1.1;
    }
    return precoFim;
}

//Função principal
int main() {
    printf("\n Digite o valor do produto: ");
    scanf("%f", &precoInicial);

    printf("Digite o tipo de pagamento (A -> A vista, P -> Prazo): ");
    scanf("%c", &opcao);
    //Limitar usuário para digitar A ou P - Criar teste com while 

    precoFinal = calculo(precoInicial, opcao);

    printf("Valor final: R$ %f", precoFinal);
    
    return 0;
}

//Praticando: Modularização, Entrada de dados pelo usuário, Impressão dos valores
#include <stdio.h>

//Variáveis
float precoInicial;
float precoFinal;
int opcao;

//Função que calcula o valor a ser pago
float calculo(float precoInicio, int escolhaUsuario){
    float precoFim;
    if( (precoInicio <= 100) && (escolhaUsuario == 1) ){ //1º Condição
        precoFim = precoInicio * 0.9;
    } else if ( (precoInicio > 100) && (escolhaUsuario == 1) ) { //2º Condição
        precoFim = precoInicio * 0.85;
    } else if ( (precoInicio <= 100) && (escolhaUsuario == 2) ) { //3º Condição
        precoFim = precoInicio; //Não muda nada
    } else if ( (precoInicio > 100) && (escolhaUsuario == 1) ) { //4º Condição
        precoFim = precoInicio * 1.1;
    }
    return precoFim;
}

//Função principal
int main() {
    printf("Digite o valor do produto: ");
    scanf("%f", &precoInicial);

    printf("Digite o tipo de pagamento (1 - A vista, 2 - Parcelado): ");
    scanf("%i", &opcao);

    precoFinal = calculo(precoInicial, opcao);

    printf("Valor final: R$ %f", precoFinal);
    
    return 0;
}

//Praticando: Modularização, Entrada de dados pelo usuário, Impressão dos valores
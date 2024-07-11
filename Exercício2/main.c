#include <stdio.h>

//Variáveis
int maiorNumero=0;
int menorNumero=0;

//Função que verifica o maior número do laço
int verificacaoMaior(int num){
    if (num > maiorNumero){
        maiorNumero = num;
    }
    return maiorNumero;
}

//Função que verifica o menor número do laço
int verificacaoMenor(int num){
    if(num < menorNumero){
        menorNumero = num;
    }
    return menorNumero;
}

int main(){
    int i;
    for(i=0; i<16; i = i + 1){ // 0 - 15
        maiorNumero = verificacaoMaior(i);
        menorNumero = verificacaoMenor(i);
    }

    printf("Maior numero = %i", maiorNumero);
    printf("Menor numero = %i \n", menorNumero);

    return 0;
}

//Praticando: Modularização, Impressão dos valores, Laço(For)
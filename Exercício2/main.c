#include <stdio.h>

// Variáveis
int numero;
int maiorNumero = 0;
int menorNumero = 0;

// Função que verifica o maior número do laço
int verificacaoMaior(int num){
    if (num > maiorNumero)    {
        maiorNumero = num;
    }
    return maiorNumero;
}

// Função que verifica o menor número do laço
int verificacaoMenor(int num){
    if (num < menorNumero)    {
        menorNumero = num;
    }
    return menorNumero;
}

int main(){
    int i;
    for (i = 0; i < 16; i = i + 1) { // 0 - 15
        printf("Digite o %i numero: ", i);
        scanf("%i", &numero);
        if(i==0){ //Condição para o primeiro laço
            maiorNumero = numero;
            menorNumero = numero;
        }
        maiorNumero = verificacaoMaior(numero);
        menorNumero = verificacaoMenor(numero);
    }

    printf("\nMaior numero = %i", maiorNumero);
    printf("\nMenor numero = %i \n", menorNumero);

    return 0;
}

// Praticando: Modularização, Impressão dos valores, Uso de Laço(For)
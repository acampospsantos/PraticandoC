#include <stdio.h>

//Refazendo a atividade2, mas utilizando while

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
    int i=0; //Inicialização
    while(i < 4){ //Condição
        printf("\n Digite o %i numero: ", i+1); 
        scanf("%i", &numero);
        while(numero < 100){ //Restringindo/Obrigando usuário a digitar números maiores que 100
            printf("Digite o %i numero novamente: ", i+1);
            scanf("%i", &numero);
        }
        if (i==0){ //Condição para o primeiro laço
            maiorNumero = numero;
            menorNumero = numero;
        }
        maiorNumero = verificacaoMaior(numero);
        menorNumero = verificacaoMenor(numero);
        i = i + 1; //Incremento
    }
    printf("\n Maior numero = %i", maiorNumero);
    printf("\n Menor numero = %i", menorNumero);

    return 0;
}

// Praticando: Modularização, Entrada de dados, Impressão dos valores, Uso de Laço(while)
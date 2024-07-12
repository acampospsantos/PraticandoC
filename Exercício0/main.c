#include <stdio.h>

//Variáveis
int antecessor;
int sucessor;

int verificaAntecessor(int num){
    int numero;
    numero = num - 1;
    return numero;
}

int verificaSucessor(int num){
    int numero;
    numero = num + 1;
    return numero; 
}

int main(){
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    antecessor = verificaAntecessor(numero);
    sucessor = verificaSucessor(numero);

    printf("\n Sucessor de %i => %i", numero, sucessor);
    printf("\n Antecessor de %i => %i", numero, antecessor);

    return 0;
}

//Praticando: Modularização, Entrada de dados pelo usuário, Impressão dos valores
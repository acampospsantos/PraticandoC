#include <stdio.h>

//Variáveis
int antecessor;
int sucessor;

int verificaAntecessor(int num){
    num = num - 1;
}

int verificaSucessor(int num){
    num = num + 1; 
}

int main(){
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    antecessor = verificaAntecessor(numero);
    sucessor = verificaSucessor(numero);

    return 0;
}

//Praticando: Modularização, Entrada de dados pelo usuário, Impressão dos valores
#include <stdio.h>

void imprimeVetor(int vetor[], int tamanho){
    int i;
    for(i=0; i < tamanho; i++) {
        printf("%i ", vetor[i]);
    }
}

void lerVetor(int vetor[], int tamanho){
    int i;
    int number;
    for(i=0; i < tamanho; i++){
        scanf("%i", &number);
        vetor[i] = number;
    }
    printf("\n");
    printf("= ");

    imprimeVetor(vetor, tamanho);
}

int main(){
    int v[6];
    int tamanho = 6;

    lerVetor(v, tamanho);
    return 0;
}

int vetorManual(){
    int v[5]; //v tem tamanho 5
    float media;
    
    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;
    //Preencher o vetor manualmente não é tão prático --> Automatizar por um for é melhor

    media = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("Resultado da media aritmetica do array = %f", media);
}

//O vetor é preenchido de forma automática pelo laço for
int automatizarVetor(){
    int v[5] = {10, 20, 30, 40, 50}; //v tem tamanho 5
    int i; //contador
    float soma = 0;
    float media;

    for (i=0; i<5; i++){
        soma = soma + v[i];
    }
    media = soma/i+1;
    printf("Resultado da media aritmetica do array = %f", media);
}

//Nesta função, o usuário preenche o vetor
int usuarioPreencheVetor(){
    int v[5];
    int i; //Contador
    int numero;

    for(i=0 ; i < 5; i++){
        printf("Digite o %i elemento do vetor", i);
        scanf("%i", &numero);
        v[i] = numero;
    }

    printf("Dados inseridos pelo usuário: \n");
    for (i=0; i<5; i++){
        printf("%i", v[i]);
    }
}

//Praticando: Modularização, Impressão dos valores, Array
#include <stdio.h>

//Variáveis
float altura;
float somaAlturas=0;
int qtd=0;
float mediaAltura;
int atletasAltos=0;

//Função que calcula a média de altura dos atletas
float alturaMedia(float height, int quantity){
    float media;
    media = height/quantity;
    return media;
}

//Função que agrupa atletas com mais de 1,5m
int calculoAtletasAltos(float height){
    if(altura > 1.5){
        atletasAltos = atletasAltos + 1;
    }
    return atletasAltos;
}

int main(){
    int i;
    for(i=1; i <= 8; i = i + 1){
        printf("Digite a altura do %i atleta: ", i);
        scanf("%f", &altura);
        somaAlturas = somaAlturas + altura;
        qtd = qtd + 1;
        atletasAltos = calculoAtletasAltos(altura);
    }

    mediaAltura = alturaMedia(somaAlturas, qtd);
    //atletasAltos já estão com o valor desejado

    printf("\nMedia de altura dos %i atletas = %f cm", qtd, mediaAltura);
    printf("\nNumero de atletas com altura maior que 1,5m: %i", atletasAltos);

    return 0;
}

//Praticando: Modularização, Entrada de dados pelo usuário, Impressão dos valores, Uso de Laço(for)
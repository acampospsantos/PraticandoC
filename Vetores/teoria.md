# Estruturas de Dados Unidimensionais

## Vetores
- Estruturas de dados unidimensionais
- Índice único controla as posições
- Sintaxe de declaração:
ˋ<tipo> <nome> [<tamanho>];ˋ

## Observação
O vetor tem tamanho n, mas sua última posição é n-1
Por que? Pois a primeira posição tem índice 0

## Manipulando vetores
- Acesso a uma posição:
  - Não é possível acessar um vetor todo
  - **Sintaxe:**
    ```
    <nome> [<indice>]
    ```

- *Lista de Inicialização*: preenche o vetor todo, de uma só vez (é a única forma) --> Isso ocorre na declaração do vetor.
```
<tipo> <nome>[<tamanho>] = {<v1>, <v2>, ... , <vN>};
```

Exemplo - Código:
```
#include <stdio.h>

int main(){
    int v[5]; //v tem tamanho 5

    float m;
    
    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("Resultado da media aritmetica do array = %f", m);

    return 0;
}

int automatizarVetor(){
    int v[5] = {10, 20, 30, 40, 50}; //v tem tamanho 5
    int i; //contador
    float soma = 0;
    float media;

    for (i=0; i<5; i++){
        soma = soma + v[i];
    }
    //v = {10, 20, 30, 40, 50}; --> NÃO FUNCIONA

    media = soma/i;

    printf("Resultado da media aritmetica do array = %f", media);
}
```

# Resumindo

## Vetores
- Memórias do computador
- Manipulando vetores
- Entrada e saída com vetores
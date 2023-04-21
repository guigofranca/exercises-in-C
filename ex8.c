//Carregue um vetor de inteiros com 100 posições e desenvolva um programa para:
//a. Exibir o maior elemento e sua posição;
//b. Imprimir a soma dos elementos que estão nos índices pares;
//c. Exiba a soma dos elementos ímpares.

#include <stdio.h>

int main() {

int vetor[3];
int i;
int maior;
int somaPar = 0;
int somaImpar = 0;
int maiorPosicao;

    printf("Preencha o vetor: \n");
    for ( i = 0; i < 3; i++ ) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for ( i = 0; i < 3; i++ ) {
        // a. Exibir o maior elemento e sua posição;
        if ( vetor[i] > maior ) { // se o vetor na posição i for maior que o maior
            maior = vetor[i]; // maior vai receber vetor na posição i
            maiorPosicao = i; // aqui pega o índice do maior
        }

        //b. Imprimir a soma dos elementos que estão nos índices pares;
        if ( i % 2 == 0 ) { // resto = 0, é par;
            somaPar += vetor[i];
        }

        //c. Exiba a soma dos elementos ímpares;
        if ( vetor[i] % 2 != 0 ) { // resto diferente de 0, é impar;
            somaImpar += vetor[i];
        }
    }

    printf("Maior elemento e sua posição: {%d}, [%d]\n", maior, maiorPosicao);
    printf("Soma dos elementos que estão nos índices pares: %d\n", somaPar);
    printf("Soma dos elementos ímpares: %d\n", somaImpar);
}
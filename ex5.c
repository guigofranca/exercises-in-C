//Escreva um programa para ler dois vetores v e w de 10 componentes cada, e calcular e escrever
//a soma dos produtos dos respectivos componentes de v e w, através da utilização de uma função.

void somar(int *vetorV, int *vetorW, int *somaV, int *somaW) { // função usando ponteiros como parâmetro;
int i;

    for ( i = 0; i < 3; i++ ) { // soma do vetor V;
        *somaV += vetorV[i];
    }

    for ( i = 0; i < 3; i++ ) { // soma do vetor W;
        *somaW += vetorW[i];
    }

}

#include <stdio.h>

int main() {

int v[3];
int w[3];
int i;
int somaW, somaV;

    printf("Preencha o vetor V:\n"); // preencher o vetor V;
    for ( i = 0; i < 3; i++ ) {
        scanf("%d", &v[i]);
    }

    printf("Preencha o vetor W:\n"); // preencher o vetor W;
    for ( i = 0; i < 3; i++ ) {
        scanf("%d", &w[i]);
    }

    somar(v, w, &somaV, &somaW);

    printf("Valor do vetor V: %d\n", somaV);
    printf("Valor do vetor V: %d\n", somaW);
}
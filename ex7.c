//Faça um programa para ler dois vetores v e w de 10 elementos cada, intercalá-los, obtendo um
//terceiro vetor que deverá ser impresso em ordem decrescente.

#include <stdio.h>

void bubbleSort(int *z) {
int i, j;
int aux;

    for ( i = 0; i < 6; i++ ) {
        for ( j = i + 1; j < 6; j++ ) {
            if ( z[i] < z[j]) {
                aux = z[i];
                z[i] = z[j];
                z[j] = aux;
            }
        }
    }
    // ALGORITMO PARA ORDERNAR O VETOR EM ORDEM DECRESCENTE

}

int main() {

int v[3];
int w[3];
int z[6];
int i, j = 0;

    printf("Preencha o vetor V:\n");
    for ( i = 0; i < 3; i++ ) {
        scanf("%d", &v[i]);
    }

    printf("Preencha o vetor W:\n");
    for ( i = 0; i < 3; i++ ) {
        scanf("%d", &w[i]);
    }

    // intercalando os vetores;
    for ( i = 0; i < 3; i++ ) {
        z[j] = v[i];
        j++;
        z[j] = w[i];
        j++;
    }

    // printando o vetor antes de ordenar
    for ( i = 0; i < 6; i++ ) {
        printf("{%d} ", z[i]);
    }

    bubbleSort(z); // chamamos a função para fazer o vetor ficar decrescente

    printf("\n");
    for ( i = 0; i < 6; i++ ) {
        printf("{%d} ", z[i]);
    }
    printf("\n");
}
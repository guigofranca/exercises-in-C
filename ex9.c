//Faça uma função MAX que recebe como entrada um inteiro n, uma matriz inteira Anxn e devolve
//três inteiros: k, l e c. k é o maior elemento de A e é igual a A[l][c]. Se o elemento máximo ocorrer
//mais de uma vez, indique em l e c qualquer uma das possíveis posições. Use ponteiros para os argumentos.

#include <stdio.h>

void MAX(int n,int matriz[3][3], int *k, int *l, int *c) {

int i, j;

*k = matriz[0][0];

    // for para achar o maior elemento dentro da matriz, e pegar a posição dele;
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++ ) {
            if ( matriz[i][j] > *k ) {
                *k = matriz[i][j]; // pega o maior valor;
                *l = i; // salva a linha;
                *c = j; // salva a coluna;
            }
        }
    }

}

int main() {

int k, l, c;
int n = 3;
int matriz[3][3];
int i, j;

    printf("Preencha a matriz:\n");
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++ ) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // printando a matriz apenas
    printf("\n");
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++ ) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    MAX(3, matriz, &k, &l, &c);

    printf("Maior elemento da matriz: %d\n", k);
    printf("Posição: [%d][%d]\n", l, c);

}
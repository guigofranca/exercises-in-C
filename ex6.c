//Escreva um programa para ler um vetor v de inteiros de 100 componentes e realizar uma busca
//neste vetor, informando se um elemento que se deseja encontrar, foi ou não encontrado no vetor
//e em que posição. Faça uma função para a busca que receba o vetor, o número de elementos do
//vetor e o valor a ser procurado. Ela deverá retornar o índice (sucesso na busca) ou -1 (fracasso na busca).

#include <stdio.h>

int procurar(int *v, int numero) {

int i;

    for ( i = 0; i < 3; i ++ ) {
        if ( v[i] == numero ) { // condição para verificar se o número digitado pelo usuário existe;
            return 1; // se ele existir, vamos retornar o valor 1;
        }
    }

    return -1; // se não existe, vamos retornar o valor -1;

}

int main() {

int v[3];
int i;
int numero;

    printf("Preencha o vetor: ");
    for ( i = 0; i < 3; i++ ) {
        scanf("%d", &v[i]);
    }

    printf("Qual número deseja procurar no vetor?\n");
    scanf("%d", &numero);

    if (procurar(v, numero) == 1) { // se o número existir, vamos fazer os dois printf;
        printf("Sucesso na busca\n");
        printf("índice = %d\n", procurar(v, numero));
    }
    else { // se não >>
        printf("Fracasso na busca\n");
        printf("Índice = %d\n", procurar(v, numero));
    }

}
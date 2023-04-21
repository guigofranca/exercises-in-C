//1. Dada uma matriz Amxn, imprimir o número de linhas e o número de colunas nulas da matriz.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

srand(time(NULL));

int tam;
    printf("Digite quantas linhas e colunas a matriz terá: ");
    scanf("%d", &tam);

int matriz[tam][tam];
int i, j;

    //Nesse for estamos preenchendo a matriz com a função *rand*, onde pega valores aleatório; nesse caso valores de 0 até 1;
    for( i = 0; i < tam; i++ ) {
        for ( j = 0; j < tam; j++ ) {
            matriz[i][j] = rand()%2; // aqui onde ocorre o preenchemento da matriz
        }
    }

    //Aqui estamos apenas printando a matriz no terminal
    for( i = 0; i < tam; i++ ) {
        for ( j = 0; j < tam; j++ ) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Agora que começa o progama
int qtdZeros, linhaNula = 0, colunaNula = 0;

    //Nesse for vamos fazer o cálculo das linhas nulas da matriz;
    for( i = 0; i < tam; i++ ) {
        qtdZeros = 0; // como a verificação de cada linha precisamos calcular tudo de novo, iniciamos o primeiro for sempre com a quantidade de zeros = 0;
        for ( j = 0; j < tam; j++ ) {
            if ( matriz[i][j] == 0 ) { // para verificar quantos 0 existem na linha precisamos fazer um if;
                qtdZeros++; // a condição é: toda vez que o valor dentro da matriz da coluna seja igual a 0, faremos a soma de um zero;
            }
            // vamos supor a seguinte matriz > {0, 0} podemos ver a olho que temos uma linha totalmente nula ( 0, 0 );
            //                                 {1, 0}
            // agora faremos um teste de mesa para entender melhor como é percorrido essa condição
            // início do for
            // i = 0;
            // se ( matriz[0][0] == 0 ) faça: quantidade de zeros + 1;
            // olhando para nossa matriz, percebemos que o primeiro valor da matriz é igual a 0, ou seja, vamos somar a quantidade de zeros com + 1;
            // no momento a quantidade de zeros é de 1;
            // vamos continuar... ainda no i = 0;
            // se ( matriz[0][1] ) faça: quantidade de zeros + 1;
            // a condição é verdadeira? se sim, soma + 1 na quantidade de zeros;
            // como a matriz {0, 0} tem apenas duas colunas, o nosso looping terminou; terminamos o nosso for looping com qtdZeros = 2;
            //               {1, 0}
        }

        // mais uma condição, porém no for externo;
        if ( qtdZeros == tam ) { // se ( qtdZeros == 2 ) faça: total de linhas nulas + 1;
            linhaNula++;
        }
        // tam = o tamanho da matriz, no exemplo o tamanho é de 2;
        // qtdZeros = 2, pois é o valor do nosso teste de mesa acima;

        // nesse if vamos calcular se a quantidade de zeros é igual ao tamanho da matriz;
        // para a linha ter todos os valores nulos, precisamos que as colunas de uma linha só sejam de valor 0;
        // ou seja, {0, 0}  linha [0] > valor do j sendo [0] é igual a 0, valor do j sendo [1] é igual a 0; TODOS OS VALORES DE J É IGUAL A 0, OU SEJA, VAI SER UMA LINHA TODA NULA
        //          {1, 0}  linha [1] > valor do j sendo [0] é igual a 1, valor do j sendo [1] é igual a 0; PELO MENOS UM DOS VALORES DE J É DIFERENTE DE 0, OU SEJA, NAO VAI SER UMA LINHA TODA NULA
        // portanto, a primeira linha é uma linha nula, ou seja, linhaNula++
        // a segunda linha não é;
        // quantidade de linhas nulas nessa matriz > 1;
    }

    //COLUNAS
    for( i = 0; i < tam; i++ ) {
        qtdZeros = 0; // iniciando sempre o for externo com a quantidade de zeros = 0;
        for ( j = 0; j < tam; j++ ) {
            if ( matriz[j][i] == 0) { // aqui vamos fazer uma condição parecida com a da linha
                qtdZeros++;           // a única diferença é que vamos trocar a matriz[i][j] por matriz[j][i];
            }                         // desse jeito vamos calcular quantas colunas nulas existem
        }                             // de resto é igual
        // ou seja, {0, 0}  coluna [0] > valor do i [0] é igual a 0, valor do i = [1] é igual a 1; // qtdZeros = 1; NÃO É NULA
        //          {1, 0}  coluna [1] > valor do i [1] é igual a 0, valor do j [1] é igual a 0; // qtdZeros = 2; É NULA
        if ( qtdZeros == tam ) {
            colunaNula++; // aqui criamos a variavel colunaNula ao inves de usarmos a linhaNula;
        }
    }
    // Printamos os valores finais
    printf("Linhas nulas: %d\n", linhaNula);
    printf("Colunas nulas: %d\n", colunaNula);
    // OUTPUT
    // Linhas nulas: 1;
    // Colunas nulas: 1;

}

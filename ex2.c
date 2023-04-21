//Os elementos aij de uma matriz inteira Anxn representam os custos de transporte da cidade i
//ara a cidade j. Dados n itinerários, cada um com k cidades, calcular o custo total para cada itinerário.

#include <stdio.h>

int main() {

int i, j;
int matriz[4][4] = {{4, 1, 2, 3},    // preenchendo a matriz de acordo com a questão;
                    {5, 2, 1, 400},
                    {2, 1, 3, 8},
                    {7, 1, 2, 5}};


    // aqui estamos printando a matriz apenas;
    for ( i = 0; i < 4; i++ ) {
        for ( j = 0; j < 4; j++ ) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

int percurso[8] = {0, 3, 1, 3, 3, 2, 1, 0}; // aqui é o percurso de cidade a cidade; valores de acordo com a questão também;
int linha, coluna;
int soma = 0;

    for ( i = 0; i < 7; i++ ) { // precisamos percorrer o vetor em um for; repare que o for vai parar no valor 6;
                                // isso porque não podemos percorrer até o ultimo valor do percurso, se não nossa soma vai somar com um valor inexistente
                                // a explicação vai estar mais abaixo, continuando o progama
        linha = percurso[i]; // precisamos descobrir um jeito de pegar um valor do percurso e ao mesmo tempo pegar o proximo valor do percurso
        coluna = percurso[i + 1]; // esse é um deles
        // sendo i = 0;
        // linha = percurso[0]
        // coluna = percurso[0 + 1] = percurso[1];
        // com essas duas linhas de código fizemos isso;

        soma += matriz[linha][coluna];
        // para fazer a soma de cidade a cidade, usaremos a matriz que temos, mais a linha e coluna que pegamos agora;
        // soma = soma + matriz[percurso[0]] [percurso[1]]; percurso na posição [0] é 0, percurso na posição [1] é 3;
        // soma = soma + matriz[0][3];
        // voltando a explicação do porque temos que fazer o for com o valor i < 7 nesse caso;
        // quando chegarmos ao i = 6, iremos fazer o valor de percurso[i] e o percurso[i + 1];
        // ao terminar o looping do i = 6, pulamos para o i = 7;
        // percurso[i] e percurso [i + 1], repare que no percurso[i + 1] o valor vai ser de 8, sendo impossível, já que não tem o percurso[8] no vetor;
    }

    printf("%d\n", soma);
    // OUTPUT
    // 417

    // lembrando que se quiser fazer o progama mais interativo, é só usar algumas variaveis e scanfs a mais;
    // por exemplo: pedir ao usuario escolher o percurso, e a matriz;
}


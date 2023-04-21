// Escreva um programa que leia um inteiro não-negativo n e imprima a soma dos n primeiros números primos.

#include <stdio.h>

int main() {

int inteiro;
int div, contador, countNumero = 2;
int i, j;
int soma = 0;

    // primeiro perguntamos ao usuário quantos números primos ele quer somar
    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);

    for (contador = 0; contador < inteiro;) { // o looping só finaliza quando encontrarmos a quantidade de números primos que o usuário digitou
        div = 0; // cada looping do for externo eu volto a variável div = 0; isso porque cada looping é uma verificação de um número; então precisamos refazer sempre;
        for ( i = 1; i < countNumero; i++ ) { // looping vai terminar quando o i for menor que o número atual; iniciamos com countNumero = 2 e i = 1;
            if ( countNumero % i == 0 ) { // se o número atual dividido pelo i atual, der resto 0, soma + 1 a variável div;
                div++;
            }
        }
        if ( div == 1 ) { // nesse caso, se ele for divisível apenas pelo número 1, ele vai ser primo; então;
            soma += countNumero; // vamos somar o número primo e guardar em uma variável chamada soma;
            contador++; // contador de números primos + 1;
        }

        // finaliza o looping;
        // o progama só para quando achar a quantidade de números primos que o usuário quis;

        // vamos fazer o teste de mesa para ficar mais claro;
        // o inteiro que o usuário escolheu foi 3; inteiro = 3;

        // se ( countNumero % i == 0 ) faça: div++; Nesse momento o countNumero é 2; o countNumero dividido pelo i atual é igual a zero? ( i atual é 1 );
        // sim, ele é, então vamos fazer div + 1;
        // fim do primeiro looping
        // O countNumero dividido pelo i atual é igual a zero? ( i atual é 2 )
        // count % i tem resto diferente de 0;
        // ou seja, não vamos incrementar 1 na variável div;
        // looping finalizado

        // se ( div == 1 ) faça: soma = soma + countNumero; contador++;
        // nesse if verificamos que, se o countNumero atual for primo eu faço a soma dele com a variavel soma;
        // depois contador++; esse contador é a quantidade de números primos que temos no total;
        // como o countNumero atual é 2, e ele é primo ( nós acabamos de verificar ); o contador vai ser incrementado, tendo o valor 1 agora;


        countNumero++; // aqui fazemos countNumero++ para verificar o próximo número, no próximo looping; ele vai ter valor 3 agora;

    }
    // depois de fazer o teste de mesa, quando achar os 3 primeiros números primos, o looping vai parar;
    // 2, 3, 5; esses são os três primeiros números;
    // a soma deles é de 10;

    printf("Soma: %d\n", soma);
}
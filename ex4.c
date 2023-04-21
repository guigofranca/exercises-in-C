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
        // como i = 2, ele não entra no looping mais;
        // agora entramos no segundo if:  ( div == 1 );
        // se o primeiro if ( countNumero % i == 0 ) nos der div == 1, ele é PRIMO;
        // um número é primo *nesse caso* quando ele é divisível apenas pelo número 1;
        // então faremos a soma desse número e guardar na variavel soma;
        // contador++ ( contagem de números primos );
        // no final do for temos um incremento para o countNumero; agora ele vai ser 3; countNumero = 3;
        // fim do primeiro looping;
        
        // segundo looping
        // countNumero = 3;
        // countNumero % i tem resto igual a 0;
        // ou seja, vamos incrementar 1 na variável div;
        // div = 1;
        // o for vai ficar em looping até o i < countNumero;
        // terminando esse for, percebemos que o div vai ser igual a 1 de novo; ou seja, ele é PRIMO;
        // fim do segundo looping;

        // até o momento temos 2 números primos: 2 e 3;
        
        // terceiro looping
        // countNumero = 4;
        // countNumero % i tem resto igual a 0;
        // ou seja, vamos incrementar 1 na variável div; div = 1;
        // perceba que quando o i for igual a 2 ele vai ter o resto igual a 0; ou seja, div++;
        // então temos o div tendo valor de 2 no momento;
        // o PRIMO só vai ser primo se o div for igual a 1;
        // logo o countNumero = 4 não é primo;
        // fim do terceiro looping;
        
        // quarto looping
        // countNumero = 5;
        // aqui é só refazer todos os passos acima e verificar se é ou não primo;
        // fim do quarto looping;
        
        // quinto looping? não!
        // aqui termina o progama, já que encontramos os três primeiros números primos ( nós escolhemos que foi o número 3 );

        countNumero++; // aqui fazemos countNumero++ para verificar o próximo número, no próximo looping;

    }
    // depois de fazer o teste de mesa, quando achar os 3 primeiros números primos, o looping vai parar;
    // 2, 3, 5; esses são os três primeiros números;
    // OUTPUT
    // Soma: 10

    printf("Soma: %d\n", soma);
}

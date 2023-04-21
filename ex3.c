//Escreva uma função que recebe como parâmetro um inteiro positivo ano e devolve 1 se ano for
//bissexto, 0 em caso contrário. (Um ano é bissexto se (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)).)

int verificarBissexto(int ano) { // primeiro temos que criar uma função com um parametro inteiro chamado ano;

    if ( (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) ) { // aqui nós temos a condição para verificar se é ano bissexto ou não;
        return 1; // se for damos um return 1; ( return 1 em funções sem ser main é a mesma coisa que TRUE );
    }
    else {
        return 0; // se não return 0 ( return 0 = FALSE );
    }

}

#include <stdio.h>

int main() {

int ano;

    // perguntamos o ano
    printf("Digite um ano: ");
    scanf("%d", &ano);

    // faremos uma verificação
    if (verificarBissexto(ano)) { // se o ano for TRUE
        printf("É BISSEXTO!\n");  // print É BISSEXTO
        printf("%d\n", verificarBissexto(ano)); // print 1
    }
    else {                           // se não
        printf("NAO É BISSEXTO!\n"); // print NAO É BISSEXTO
        printf("%d\n", verificarBissexto(ano)); // print 0
    }

}
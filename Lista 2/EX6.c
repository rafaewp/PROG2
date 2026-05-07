/* EX 6 --- Fazer um programa que sorteie um número de 0 a 100 e que permita que o usuário (sem conhecer o número sorteado) tente acertar. Caso não acerte, o programa deve imprimir uma mensagem informando se o número sorteado é maior ou menor que a tentativa feita. Ao acertar o número, o programa deve imprimir a quantidade de tentativas feitas. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    // Variáveis
    int n_random = rand() % 100;
    int palpite;
    
    // Palpite
    printf("-- ADVINHE O NUMERO (DE '0' A '100') --\n");
    scanf(" %d", &palpite);

    // Condições
    if (palpite < n_random) printf("-- seu palpite foi MENOR do que o numero sorteado (%d) --", n_random);
    else if (palpite > n_random) printf("-- seu palpite foi MAIOR do que o numero sorteado (%d) --", n_random);
    else printf("-- ACERTOU --");

    return 0;
}
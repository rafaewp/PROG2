/* EX 4 --- Escreva um programa que sorteie uma letra do alfabeto de ‘a’ a ‘z’ e o usuário é perguntado qual é essa letra. O programa deve informar se a letra é maior ou menor e quando o usuário a acertou. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // Variáveis
    char l_random, palpite;

    // Sorteio
    l_random = 'a' + (rand() % 26);

    // Palpite
    printf("-- ADVINHE A LETRA (DE 'a' A 'z') --\n");
    scanf(" %c", &palpite);

    // Condições
    if (palpite < l_random) printf("-- seu palpite foi MENOR do que a letra sorteada (%c) --", l_random);
    else if (palpite > l_random) printf("-- seu palpite foi MAIOR do que a letra sorteada (%c) --", l_random);
    else printf("-- ACERTOU --");

    return 0;
}
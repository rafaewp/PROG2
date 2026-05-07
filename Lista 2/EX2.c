/* EX 2 --- Faça um programa que calcule e imprima a soma dos n primeiros números naturais ímpares. O usuário do programa deve fornecer quantos números devem ser somados. */

#include <stdio.h>

int main(){

    // Variáveis
    int valor, soma = 0;
    int impar = 1;

    // Leitura do Valor
    printf("-- DIGITE UM VALOR A SER ANALISADO --\n");
    scanf("%d", &valor);

    for (int i = 0; i < valor; i++){
        soma += impar;
        impar += 2;
    }

    // Impressão
    printf("-- SOMA: %d --\n", soma);

    return 0;
}
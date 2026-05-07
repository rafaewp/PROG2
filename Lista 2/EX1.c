/* EX 1 --- Faça um programa que verifique se um determinado número é primo. O número a ser testado deve ser fornecido pelo usuário do programa. O programa deve imprimir a mensagem “NUMERO PRIMO” caso o número seja primo, e “NUMERO NAO PRIMO”
caso contrário. */

#include <stdio.h>

int ehPrimo(int valor){

    // Contador
    int divisores = 0;

    // Verificação 
    for (int i = 1; i < (valor+1); i++){
        if (valor % i == 0) divisores++;
    }

    // Impressões
    if (divisores == 2) printf("-- NUMERO PRIMO --");
    else printf("-- NUMERO NAO PRIMO --");
}


int main(){

    // Variáveis
    int resultado, valor = 0;

    // Leitura do Valor
    printf("-- DIGITE UM VALOR A SER ANALISADO --\n");
    scanf("%d", &valor);
    resultado = ehPrimo(valor);

    return 0;
}
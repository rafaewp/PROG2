#include <stdio.h>

/* EX 1 --- Fazer um programa para receber um número inteiro de segundos do usuário e imprimir
a quantidade correspondente em horas, minutos e segundos. */

int main(){

    // Declaração de variáveis
    int N = 0;
    int horas = 0; 
    int minutos = 0;

    // Leitura do número inteiro
    printf("-- DIGITE UM NUMERO INTEIRO --\n");
    scanf("%d", &N);

    // Cálculo de Horas
    horas = N / 3600;
    N = N % 3600;

    // Cálculo de Minutos
    minutos = N / 60;
    N = N % 60;

    printf("%dh : %dmin : %ds" , horas, minutos, N);
    return 0;
}
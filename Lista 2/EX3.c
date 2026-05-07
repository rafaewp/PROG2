/* EX 3 --- Faça um programa que imprima os n primeiros termos da série de Fibonacci, lembrando que esta série é definida da seguinte forma:
--> termo_1 = 1
--> termo_2 = 1
--> termo_n = termo_n−1 + termo_n−2
O usuário do programa deve fornecer o número de termos, e estes devem ser impressos separados por um espaço. Por exemplo, se o usuário pedir os 6 primeiros termos da série de Fibonacci, o programa deve ter a seguinte saída: 
1 1 2 3 5 8. */

#include <stdio.h>

int main(){

    // Variáveis
    int a = 1, b = 1;
    int c, numero = 0;

    // Leitura dos Valores
    printf("-- DIGITE UM NUMERO --\n");
    scanf("%d", &numero);

    // Fibonacci
    if (numero == 1) printf("1");
    else if (numero == 2) printf("1 1");
    else if (numero >= 3){
        printf("1 1");
        for (int i = 0; i < (numero-2); i++){
            c = a+b;
            printf(" %d", c);
            a = b;
            b = c;
        } 
    }

    return 0;
}
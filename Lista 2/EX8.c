/* EX 8 --- O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025. Fazer um programa para obter todos os números de 4 algarismos com a mesma característica do número 3025. */

#include <stdio.h>

int main(){

    // Variáveis
    int metade1, metade2, soma;

    // Loop + Impressão
    printf("-- NUMEROS DE 4 ALGARISMOS COM A CONDICAO DESEJADA --\n");

    for (int i=1000; i<=9999; i++){
        metade1 = i / 100;
        metade2 = i % 100;
        soma = metade1 + metade2;
        if((soma * soma) == i) printf("%d ", i); 
    }

    return 0;
}
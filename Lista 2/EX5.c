/* EX 5 --- Escreva um programa em C para ler um valor X e um valor Z (se Z for menor que X deve ser lido um novo valor para Z). Contar quantos números inteiros devemos somar em sequência (a partir do X inclusive) para que a soma ultrapasse a Z o mínimo possível. Escrever o valor final da contagem. */

#include <stdio.h>

int main(){

    // Leitura e validação dos valores
    int x, z;
    printf("-- DIGITE 2 VALORES SEPARADOS POR UM ESPACO --\n");
    scanf("%d %d", &x, &z);
    while (z < x){
        printf("-- VALOR INVALIDO, DIGITE OUTRO --\n");
        scanf("%d %d", &x, &z);
    }

    // Variáveis do loop
    int soma = 0;
    int contador = 0;
    int i = x;

    // Loop de contagem
    while (soma <= z){
        soma += i;
        i++;
        contador++;
    } 

    // Impressão
    printf("%d (", contador);
    int soma2 = 0;
    int i2 = x;
    while (soma2 <= z){
        soma2 += i2;
        printf("%d", i2);
        if (soma2 <= z) printf("+");
        else printf("=%d)", soma2);
        i2++;
    } 

    return 0;
}
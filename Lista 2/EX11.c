/* EX 11 --- Faça um algoritmo para ler dois números inteiros e calcular e mostrar o valor resultante se elevarmos a base representada pelo primeiro à potência representada pelo segundo. Dica: busque qual a função que faz a potenciação. */

#include <stdio.h>
#include <math.h>

int main(){

    // Variáveis
    float base, expoente, resultado;
    
    // Leitura dos Valores
    printf("-- DIGITE UMA BASE --\n");
    scanf("%f", &base);
    printf("-- DIGITE UM EXPOENTE --\n");
    scanf("%f", &expoente);

    // Cálculo + Impressão
    resultado = pow(base, expoente);
    printf("RESULTADO: %.0f", resultado);
    return 0;

}
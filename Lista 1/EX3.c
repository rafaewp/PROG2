/* EX 3 --- Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. O programa deve retornar o resultado da operação recebida sobre estes
dois números. */

#include <stdio.h>

int main(){

    // Valores
    float a, b, resultado = 0.0;
    printf("-- DIGITE 2 VALORES --\n");
    scanf("%f %f", &a, &b);

    // Operações
    char operacao = '\0';
    printf("-- DIGITE: (+), (-), (*), (/) --> SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO --\n");

    // Espaço para limpar o buffer e captar o símbolo adequado
    scanf(" %c", &operacao);

    if (operacao == '+') resultado = (a+b); 
    if (operacao == '-') resultado = (a-b); 
    if (operacao == '*') resultado = (a*b); 
    if (operacao == '/') resultado = (a/b);
    printf("RESULTADO: %.1f\n", resultado);
    
    return 0;
}
#include <stdio.h>

/* EX 4 --- Um funcionário da UFF precisa validar as notas de 3 provas fornecidas por um
professor e indicar: a média, se está aprovado/reprovado e se tem direito de realizar a VS.
Inicialmente, faça um programa que recebe como entrada as 3 notas e mostre os
resultados solicitados. Posteriormente, coloque o código de cálculo da média em uma
função. Em um passo seguinte, realize os controles necessários para não receber notas
inválidas. */

float media(float a, float b, float c){
    if (a >= 0.00 && b >= 0.00 && c >= 0.00) return (a+b+c)/3.0;
    else return -1;
}

int main(){

    // Leitura dos valores
    float a, b, c = 0.0;
    printf("-- DIGITE 3 VALORES --\n");
    scanf("%f %f %f" , &a, &b, &c);

    // MEDIA
    float resultado = 0.00;
    resultado = media(a,b,c);
    while (resultado == -1){
        printf("-- Valores Invalidos --\n");
        printf("-- DIGITE 3 VALORES --\n");
        scanf("%f %f %f" , &a, &b, &c);
        resultado = media(a,b,c);
    }
    printf("MEDIA: %.2f\n" , resultado);

    // Impressões
    if (resultado >= 6.00){
        printf("APROVADO\n");
    }
    if (4.00 <= resultado && resultado <= 6.00){
        printf("REPROVADO\n");
        printf("APTO PARA A VS\n");
    }
    if (resultado < 4.00){
        printf("REPROVADO\n");
        printf("INAPTO PARA A VS\n");
    }

    return 0;

}
/* EX 2 --- Fazer um programa que recebe 3 valores inteiros do usuário e mostra o maior deles, o menor deles, os valores pares e a média. */

#include <stdio.h>

int main(){

    // Leitura dos Valores
    int X, Y, Z = 0;
    printf("-- DIGITE 3 VALORES INTEIROS --\n");
    scanf("%d %d %d", &X, &Y, &Z);

    // Maior
    int maior = X;
    if (Y > maior){
        maior = Y;
    }
    if (Z > maior){
        maior = Z;
    }
    printf("MAIOR: %d\n" , maior);

    // Menor
    int menor = X;
    if (Y < menor){
        menor = Y;
    }
    if (Z < menor){
        menor = Z;
    }
    printf("MENOR: %d\n" , menor);

    // Média
    float media = (X+Y+Z)/3.0;
    printf("MEDIA: %.1f\n" , media);

    // Pares
    printf("PAR(ES): ");
    if (X % 2 == 0){
        printf("%d ", X);
    }
    if (Y % 2 == 0){
        printf("%d ", Y);
    }
    if (Z % 2 == 0){
        printf("%d ", Z);
    }

    return 0;
}
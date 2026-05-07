/* EX 6 --- Implemente uma função que calcule as raízes de uma equação do segundo grau, do tipo ax2 + bx + c = 0. Observação: para o cálculo da raiz quadrada de um número, utilize a função sqrt. Consulte a documentação de como usá-la no programa. */

#include <stdio.h>
#include <math.h>

// FUNCAO DELTA
int delta(int a, int b, int c){
    return (b*b) - (4*(a*c));
}

int main(){
    
    // Leitura dos Valores + Cálculo Delta
    int a, b, c, resultado = 0;
    printf("-- DADO A EXPRESSAO : ax2 + bx + c = 0 --> DIGITE VALORES INTEIROS PARA a, b, c --\n");
    scanf("%d %d %d", &a, &b, &c);
    resultado = delta(a, b, c);

    // Tratamento dos Casos de Delta
    if (resultado < 0) printf("-- SEM RAIZES REAIS --");

    if (resultado == 0){
        printf("-- RAIZ UNICA --\n");
        float raiz_1 = (-b / (2*a)); printf("X1: %.2f\n", raiz_1);
    }

    if (resultado > 0){
        printf("-- DUAS RAIZES --\n");
        float raiz_1 = (-b + sqrt(resultado)) / (2*a); printf("X1: %.2f\n", raiz_1);
        float raiz_2 = (-b - sqrt(resultado)) / (2*a); printf("X2: %.2f\n", raiz_2);
    }
    
    return 0;
}
#include <stdio.h>

/* EX 8 --- Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e determine o menor número de notas para se obter o montante fornecido. A função deve ter o seguinte protótipo:
int total_de_notas(int valor);. */

#include <stdio.h>

int total_de_notas(int valor){

    // Variável para armazenar a quantidade calculada em cada volta
    int qtd = 0;

    // Array com o valor das notas
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};

    // Array com as quantidades
    int quantidades[7] = {0, 0, 0, 0, 0, 0, 0};


    // Percorrendo o Array
    for (int i = 0; i < 7; i++){
        
        // Descobre quantas notas cabem no valor atual
        qtd = valor / notas[i]; 
        
        // Guarda essa quantidade no array de quantidades x cédulas
        quantidades[i] = qtd;
        
        // Atualiza o valor com o resto da divisão para a próxima volta
        valor = valor % notas[i]; 
    }

    // Loop responsável pela impressão do texto Quantidades x Valores de Nota
    for (int i = 0; i < 7; i++){
        printf("%d nota(s) de R$ %d,00\n", quantidades[i], notas[i]);

    }

    return 0;
}

int main(){

    // Valor a ser analisado
    int valor = 0;
    printf("-- DIGITE UM VALOR A SER ANALISADO --\n");
    scanf("%d", &valor);

    // Tratamento do Valor + Impressões
    if (valor >= 0) printf("-- TOTAL DE NOTAS: %d --", total_de_notas(valor));
    else printf("-- VALOR INVALIDO --");

    return 0;
}

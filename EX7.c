#include <stdio.h>
#include <math.h>

/* EX 7 --- Faça operações de arredondamento para cima e para baixo com números float. Dica:
Pesquise o documento “Cartão de Referência da Linguagem C” para encontrar quais
funções devem ser usadas no programa. */

int main() {

    float numero = 0.0;
    printf("-- DIGITE UM NUMERO COM CASAS DECIMAIS --\n");
    scanf("%f", &numero);

    // Aplicando as funções + Impressões
    printf("Arredondado para CIMA: %.2f\n", ceil(numero));
    printf("Arredondado para BAIXO: %.2f\n", floor(numero));

    return 0;
}
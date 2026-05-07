/* EX 9 --- Implementar a função INVERTE que recebe um número unsigned int como parâmetro e retorna este número escrito ao contrário. Ex: 431 <-> 134. */

#include <stdio.h>

unsigned int INVERTE(unsigned int numero) {
    unsigned int invertido = 0;

    while (numero > 0) {
        invertido = (invertido * 10) + (numero % 10);
        numero /= 10;
    }

    return invertido;
}

int main(){

    unsigned int n;
    printf("-- DIGITE UM NUMERO --\n");
    scanf("%u", &n);
    printf("INVERTIDO: %u", INVERTE(n));
    return 0;
}
    
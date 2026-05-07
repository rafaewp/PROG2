/* EX 7 --- Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se acrescenta nenhum adicional. Acima de 40h e até 60h há um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas horas. */

#include <stdio.h>

int main(){

    // Variáveis
    float horas_t, valor, salario;

    // Leitura dos Valores
    printf("-- DIGITE QUANTAS HORAS FORAM TRABALHADAS NA SEMANA --\n");
    scanf("%f", &horas_t);
    printf("-- DIGITE QUANTO VALE A HORA --\n");
    scanf("%f", &valor);

    // Condições
    if (horas_t <= 40){
        salario = (horas_t*valor);
    }
    else if (horas_t <= 60){
        salario = (40 * valor) + ((horas_t - 40) * valor * 1.5);
    }
    else{
        salario = (40 * valor) + (20 * valor) + ((horas_t - 60) * valor * 2); 
    }

    // Impressão
    printf("-- SALARIO SEMANAL: R$ %.2f --", salario);
    return 0;
}
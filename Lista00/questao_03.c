/* Sabendo que o quilowatt de energia custa um décimo do salário mínimo, faça um programa que 
leia o valor do salário mínimo e a quantidade de quilowatts gasta por um usuário e calcule e 
escreva: o valor de um quilowatt e o valor da conta de energia do usuário. */
#include <stdio.h>

int main(void){

    float salario_min, quantidade_qw, valor_qw;

    printf("Digite seu salario minimo: R$");
    scanf("%f", &salario_min);
    printf("Digite a quantidade de energia gasta esse mes: ");
    scanf("%f", &quantidade_qw);

    valor_qw = salario_min*0.1;

    printf("O valor do quilowatt eh: R$%.2f\n", valor_qw);
    printf("O valor da conta de energia eh: R$%.2f", valor_qw*quantidade_qw);

    return 0;
}
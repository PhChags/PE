/* Faça um programa que leia o salário de um funcionário e o salário mínimo vigente. Calcular e 
escrever quantos salários mínimos ganha o funcionário. */
#include <stdio.h>

int main(void){

    float salario_min, salario_func, a;

    printf("Digite seu salario: ");
    scanf("%f", &salario_func);
    printf("Digite o salario minimo vingente: ");
    scanf("%f", &salario_min);

    a = salario_func / salario_min;

    printf("Voce recebe %.2f salarios minimos", a);

    return 0;
}
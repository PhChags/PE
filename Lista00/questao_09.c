/* Faça um programa que leia o salário de um funcionário e que calcule e escreva o salário com um 
desconto de 10%. */
#include <stdio.h>

int main(void){

    float salario;

    printf("Informe seu salario: R$");
    scanf("%f", &salario);

    printf("Seu salario descontado eh: R$%.2f", salario * 0.9);

    return 0;
}
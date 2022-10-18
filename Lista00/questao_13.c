/* Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação 
dos dois números e a divisão e a subtração do primeiro pelo segundo */
#include <stdio.h>

int main(void){

    float A, B;

    printf("Digite o valor de A e B: \n");
    scanf("%f %f", &A, &B);

    printf("\nA soma dos elementos eh: %.2f\n A multiplicacao eh: %.2f\n %.2f menos %.2f eh: %.2f\n %.2f dividido por %.2f eh: %.2f", 
    A + B, A * B, A, B, A - B, A, B, A / B);

    return 0;
}
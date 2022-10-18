/* Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação 
dos dois números e a divisão e a subtração do primeiro pelo segundo. Caso o segundo número 
digitado seja zero, o programa deve informar ao usuário que a operação de divisão é impossível */
#include <stdio.h>

int main(void){

    float A, B;

    printf("Digite o valor de A e B: \n");
    scanf("%f %f", &A, &B);

    if (B != 0){
        printf("\nA soma dos elementos eh: %.2f\n", A + B); 
        printf("A multiplicacao eh: %.2f\n", A * B); 
        printf("%.2f menos %.2f eh: %.2f\n", A, B, A - B);  
        printf("%.2f dividido por %.2f eh: %.2f", A, B, A / B);
    } else{
        printf("\nA soma dos elementos eh: %.2f\n", A + B); 
        printf("A multiplicacao eh: %.2f\n", A * B); 
        printf("%.2f menos %.2f eh: %.2f\n", A, B, A - B);  
        printf("Nao eh possivel dividir por zero");
    }

    return 0;
}
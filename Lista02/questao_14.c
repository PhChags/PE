/* Faça um programa que leia um número inteiro positivo N e calcule o valor da expressão abaixo. 
Caso o usuário digite um valor menor ou igual a zero, o algoritmo deve escrever uma mensagem 
informando que a expressão não pode ser calculada. E = 1/N + 1/(N - 1) + 1/(N-2) + ... + 1*/
#include <stdio.h>

int main(void){
    
    int N;
    float E = 1.0;

    do{
        printf("\nDigite um numero: ");
        scanf("%d", &N);
        if (N <= 0)
            printf("\nNumero invalido, expressao nao pode ser calculada\n");
    } while (N <= 0);
    
    for (int i = N - 1; i > -1; i--)
        E += (1 / ((N - i) * 1.0));

    printf("O resultado da expressao eh de %.2f", E);

    return 0;
}
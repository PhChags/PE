/* Faça um programa que calcule o valor de E segundo a expressão abaixo:
E = 2^1 + 2^2 + 2^3 + ... + 2^N-1 + 2^N */
#include <stdio.h>
#include <math.h>

int main(void){

    int N, E = 0;

    do{
        printf("\nDigite um numero inteiro e positivo: ");
        scanf("%d", &N);

        if (N <= 0)
            printf("\nNumero invalido, expressao nao pode ser calculada\n");
    } while (N <= 0);

    for (int i = N; i > 0; i--)
        E += pow(2, i);
    printf("O resultado da expressao eh de %d", E);

    return 0;
}
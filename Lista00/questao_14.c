/* Fazer um programa que leia dois números inteiros A e B, e que troque seus valores. Escrever os 
valores antes e depois da troca. 
Exemplo: (Antes)  A = 5 B = 8 
         (Depois) A = 8 B = 5 */
#include <stdio.h>

int main(void){

    int A, B, C;

    printf("Digite os valores de A e B: \n");
    scanf("%d %d", &A, &B);
    
    C = A;
    printf("\n\nA = %d B = %d", A, B);

    A = B;
    B = C;
    printf("\n\nA = %d B = %d", A, B);

    return 0;
}
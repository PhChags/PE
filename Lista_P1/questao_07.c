/* Faça um programa que leia dois números inteiros A e B e que calcule o quociente da divisão de A por B. O programa 
deve conter uma função recursiva que retorne este valor, entretanto para este cálculo não deve ser usada nenhuma 
operação de divisão. Lembre-se que a divisão é conjunto de subtrações sucessivas. */
#include <stdio.h>

int quociente(int A, int B) {
    if (B > A)
        return 0;
    else
        return (1 + quociente(A - B, B));
}
int main(void) {
    int A, B;

    do {
        printf("Digite um valor para A: ");
        scanf("%d", &A);
    } while (A < 0);
    do {
        printf("Digite um valor para B: ");
        scanf("%d", &B);
    } while (B <= 0);
    
    printf("O valor da divisao eh: %d", quociente(A, B));
    
    return 0;
}
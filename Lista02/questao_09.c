/* Faça um programa que leia um número K e escreva os termos da série de Fibonacci menores ou 
iguais a K. Faça a validação para que o valor de K seja maior do que 0. */
#include <stdio.h>

int main(void){

    int k, soma, F1, F2;

    do{
        printf("Digite o numero parametro: ");
        scanf("%d", &k);
    } while (k < 1);

    F1 = 0;
    F2 = 1;
    
    printf("\n\n%d %d", F1, F2);
    
    soma = F1 + F2;
    
    while (soma <= k){
        printf(" %d", soma);
        F1 = F2;
        F2 = soma;
        soma = F1 + F2;
    }
    
    return 0;
}
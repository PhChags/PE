/* Faça um programa que leia 2 números inteiros positivos, A e B, e que calcule a soma de todos os 
números compreendidos entre eles. Os valores A e B não devem ser considerados no somatório. 
Caso A seja maior do que B deve ser enviada uma mensagem para o usuário informando que a 
soma não será realizada. */
#include <stdio.h>

int main(void){

    int A, B, soma = 0;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &A, &B);

    if (A > B)
        printf("Soma nao pode ser realizada, pois %d eh maior que %d", A, B);
    else{
        for (int i = A + 1; i < B; i++)
            soma += i;
        printf("O somatorio dos elementos entre %d e %d eh: %d", A, B, soma);    
    }
    return 0;
}
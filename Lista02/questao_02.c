/* Faça um programa que leia a quantidade e o preço de 50 produtos que foram comprados por uma 
empresa. Ao final deve ser escrito o total gasto pela empresa. */
#include <stdio.h>

int main(void){

    float preco, preco_total = 0.0;
    int N, i;

    for (i = 0; i < 50; i++){
        printf("Informe o preco do produto: R$");
        scanf("%f", &preco);
        printf("Informe quantas unidades foram compradas: ");
        scanf("%d", &N);

        preco_total += (N * preco);
    }

    printf("\nA empresa gastou um total de R$%.2f", preco_total);

    return 0;
}
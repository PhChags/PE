/* Faça um programa que leia os nomes e os preços dos produtos de uma loja e que escreva o nome 
do produto mais caro. Considere que o final da lista é marcado pelo produto ‘XXX’ e que não 
existem preços repetidos. */
#include <stdio.h>
#include <string.h>

int main(void) {

    char produto[73];
    float preco, maior;

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]s", &produto);
    while (strcmp (produto, "XXX") == 1){
        printf("Digite o preco do produto: R$");
        scanf("%f", &preco);
        if (preco > maior)
            maior = preco;
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]s", &produto);
    }
    
    printf("\n\nO produto mais caro vale R$%.2f", maior);      

    return 0;
}
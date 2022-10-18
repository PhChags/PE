/* Faça um programa que escreva quanto um consumidor deverá pagar na sua conta de luz. Os 
dados de entrada do algoritmo devem ser: o nome do consumidor, o seu consumo mensal em 
quilowatts, e o preço equivalente a um quilowatt. */ 
#include <stdio.h>

int main(void){

    char nome[50];
    float cons_qw, preco_qw;

    printf("Digite o nome do consumidor: ");
    scanf(" %[^\n]s", nome);
    printf("Digte o seu consumo mensal em quilo watts: ");
    scanf("%f", &cons_qw);
    printf("Digite o preco quivalente a um quilowatt: ");
    scanf("%f", &preco_qw);
    
    printf("%s devera pagar R$%.2f na sua conta de luz", nome, cons_qw * preco_qw);

    return 0;
}
/* O síndico do condomínio Praias Oceânicas, que possui 4 blocos, instituiu uma nova forma de 
cobrança. Os condôminos dos blocos Itaipu e Itacoatiara pagam 10% a mais que os moradores dos 
blocos Camboinhas e Piratininga. Os moradores da cobertura pagam uma taxa extra fixa relativa a 
1% do total do condomínio. Supondo que cada bloco possui 20 apartamentos simples e 4 coberturas, 
faça um programa que leia a taxa condominial básica e que informe o total arrecadado pelo síndico 
no mês, especificando também os valores diferenciados de cada condomínio. */
#include <stdio.h>

int main(void){

    float taxa, taxa2;

    printf("Informe a taxa condominal basica: R$");
    scanf("%f", &taxa);

    taxa2 = 1.1 * taxa;

    printf("\nO sindico arrecadou um total de R$%.2f esse mes", 
    (taxa * 20) + (4 * (1.01 * taxa) + (taxa2 * 20) + (4 * (1.01 * taxa2))));
    printf("\n\nMoradores dos apartamentos simples dos blocos Camboinhas e Piratininga pagaram R$%.2f esse mes\nOs moradores de cobertura dos blocos Camboinhas e Piratininga pagaram R$%.2f",
    taxa, 1.01 * taxa);
    printf("\n\nMoradores dos apartamentos simples dos blocos Itaipu e Itacoatiara pagaram R$%.2f esse mes\nOs moradores de cobertura dos blocos Itaipu e Itacoatiara pagaram R$%.2f",
    taxa2, 1.01 * taxa2);

    return 0;
}
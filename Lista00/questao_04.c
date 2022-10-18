/* Um funcionário recebe um salário fixo mais 4% de comissão sobre as suas vendas. Faça um 
programa que receba o valor do salário fixo do funcionário, o valor das suas vendas e que calcule 
e mostre o salário final do funcionário. */
#include <stdio.h>

int main(void){

    float salario_fixo, vendas;

    printf("Digite seu salario fixo: ");
    scanf("%f", &salario_fixo);
    printf("Digite o valor de suas vendas esse mes: ");
    scanf("%f", &vendas);

    printf("\nSeu salario total esse mes serah R$%.2f\n", salario_fixo + (vendas * 0.04));

    return 0;
}
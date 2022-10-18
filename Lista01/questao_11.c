/* Uma loja de bicicletas paga a cada vendedor 2 salários mínimos mensais, mais uma comissão de 5% 
sobre as vendas das bicicletas, dividida igualmente entre eles. Escreva um programa que leia o 
número de empregados da loja, o valor do salário mínimo, o valor das vendas do mês e que calcule e 
escreva: o salário total de cada empregado. */
#include <stdio.h>

int main(void){

    int funcionarios;
    float salario_min, salario_func, comissao, vendas;

    printf("Informe o numero de funcionarios da loja: ");
    scanf("%d", &funcionarios);
    printf("Informe o valor das vendas desse mes: R$");
    scanf("%f", &vendas);
    printf("informe o valor atual do salario minimo: R$");
    scanf("%f", &salario_min);

    comissao = vendas * 1.05;
    salario_func = (salario_min * 2) + (comissao / funcionarios);

    printf("O salario dos funcionarios da loja esse mes serah de: R$%.2f", salario_func);

    return 0;
}
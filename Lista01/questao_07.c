/* Faça um programa que leia a quantidade de horas aula dadas por dois professores e o valor por 
hora recebido por cada um. Mostrar na tela qual dos professores tem salário total maior. */
#include <stdio.h>

int main(void){

    float quant_horas1, quant_horas2, valor_hora1, valor_hora2, salario_total1, salario_total2;

    printf("Digite a quantidade de horas dada e o quanto o Professor 1 recebe por elas:\n");
    scanf("%f %f", &quant_horas1, &valor_hora1);
    printf("Digite a quantidade de horas dada e o quanto o Professor 2 recebe por elas:\n");
    scanf("%f %f", &quant_horas2, &valor_hora2);

    salario_total1 = quant_horas1 * valor_hora1;
    salario_total2 = quant_horas2 * valor_hora2;

    if (salario_total1 == salario_total2)
        printf("Ambos recebem o mesmo R$%.2f", salario_total1);
    else
        if (salario_total1 > salario_total2)
            printf("O Professor 1 recebe R$%.2f o que eh mais que os R$%.2f ganhos pelo Professor 2", salario_total1, salario_total2);
        else
            printf("O Professor 1 recebe R$%.2f o que eh menos que os R$%.2f ganhos pelo Professor 2", salario_total1, salario_total2);

    return 0;
}
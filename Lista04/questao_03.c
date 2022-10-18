/* Um funcionário recebe um salário fixo mais 6% de comissão sobre suas vendas. Faça um  programa que leia o salário de um funcionário, 
o valor total de suas vendas e apresente o seu salário final. Considere N funcionários (use alocação dinâmica). */
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct func_sal {
    float salario;
    float vendasT;
};
typedef struct func_sal tysfunc;

float salario_final (tysfunc *sal) {
    float salarioF;
    salarioF = sal->salario + (sal->vendasT * 0.06);
    return salarioF;
}
int main(void) {
    char continua[] = "SIM";
    tysfunc sal_func;

    while (strcmpi(continua, "SIM") == 0){
        printf("Digite o salario do funcionario: R$");
        scanf("%f", &sal_func.salario);
        printf("Digite o valor total de vendas desse funcionario: R$");
        scanf("%f", &sal_func.vendasT);
        printf("\nSeu salario final equivale ah: R$%.2f\n", salario_final(&sal_func));
        getch();
        printf("\n\nDeseja continuar?");
        printf("\nSIM / NAO\n");
        scanf(" %s", continua);
    }
    
    return 0;
}
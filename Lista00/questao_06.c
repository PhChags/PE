/* João recebeu seu salário e precisa pagar duas contas atrasadas. Como as contas estão 
atrasadas, João deverá pagar uma multa de 2% sobre cada uma. Faça um programa que leia o 
valor do salário de João e das contas que ele deve pagar, e que mostre quanto restará do seu 
salário após o pagamento das contas. */
#include <stdio.h>

int main(void){

    float salarioI, conta1, conta2, salarioF;

    printf("Digite seu salario: ");
    scanf("%f", &salarioI);
    printf("Informe os valores das contas:\n");
    scanf("%f %f", &conta1, &conta2);

    conta1 += conta1 * 0.02;
    conta2 *= 1.02;
    salarioF = salarioI - (conta1 + conta2);

    printf("Apos o pagamento das contas restarah %.2f do seu salario", salarioF);

    return 0;
}
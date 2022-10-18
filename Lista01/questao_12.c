/* O presidente de um país sul-americano quer investir em saúde, educação, habitação, segurança e 
previdência, que são as cinco metas de seu governo. Assim, o presidente decide criar mais um 
imposto, o ISSS (Imposto Sobre Seu Saldo), que é calculado sobre o saldo médio da contacorrente, segundo a tabela abaixo: 
• Saldo < 100: isento 
• 100 ≤ Saldo < 1000: imposto devido é 1% sobre o saldo 
• 1000 ≤ Saldo < 10000: imposto devido é de 2% sobre o saldo 
• 10000 ≤ Saldo < 100000: imposto devido é de 3% sobre o saldo 
• Saldo ≥ 100000: imposto devido é de 5% sobre o saldo
Faça um programa que permita ao usuário informar seu saldo bancário e que escreva o 
ISSS devido. */
#include <stdio.h>

int main(void){

    float saldo;

    printf("Informe seu saldo bancario: R$");
    scanf("%f", &saldo);

    if (saldo < 100)
        printf("Isento do ISSS");
    else
        if (saldo < 1000)
            printf("Imposto de 1%% sobre o saldo");
        else
            if (saldo < 10000)
                printf("Imposto de 2%% sobre o saldo");
            else
                if (saldo < 100000)
                    printf("Imposto de 3%% sobre o saldo");
                else
                    printf("Imposto de 5%% sobre o saldo");
                    
    return 0;
}
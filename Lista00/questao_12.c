/* Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcular e 
escrever a idade dessa pessoa em anos, meses e semanas. */
#include <stdio.h>

int main(void){

    int ano_nasc, mes_nasc, dia_nasc, ano_atual, mes_atual, dia_atual, dias, meses, anos;

    printf("Digite sua data de nascimento, no formato dd/mm/aaaa: \n");
    scanf("%d/%d/%d", &dia_nasc, &mes_nasc, &ano_nasc);
    printf("Digite a data de hoje, no formato dd/mm/aaaa: \n");
    scanf("%d/%d/%d", &dia_atual, &mes_atual, &ano_atual);

    //Por não poder usar if/else, ele dará sua idade no ano, independente se voce 
    //ainda não tenha feito aniversario
    anos = ano_atual - ano_nasc;
    meses = anos * 12;
    dias = anos * 365;

    printf("Sua idade em anos eh: %d\nEm meses eh %d\nEm dias de eh %d", anos, 
    meses, dias);

    return 0;
}
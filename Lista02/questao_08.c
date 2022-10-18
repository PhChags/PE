/* Faça um programa que calcule o valor total que um edifício garagem arrecadou em um dia de 
operação, no qual 200 carros utilizaram o estacionamento. O algoritmo deve ler o horário de 
entrada (hora e minuto) assim como o de saída. Sabe-se que o valor mínimo cobrado é de 4 reais 
por um período 2 horas. A partir daí, cobra-se 1 real por hora adicional. */
#include <stdio.h>

int main(void){

    int hora_ent, min_ent, hora_sai, min_sai;
    float valor = 0, hora_tot, min_tot;

    for (int i = 1; i <= 200; i++){
        printf("\nDigite a hora de entrada, no formato hh:mm: ");
        scanf("%d:%d", &hora_ent, &min_ent);
        printf("Digite a hora de saida, no formato hh:mm: ");
        scanf("%d:%d", &hora_sai, &min_sai);

        if (hora_sai < hora_ent)
            hora_sai += 24;
        hora_tot = hora_sai - hora_ent;
        if (min_sai < min_ent)
            min_sai += 60;
        min_tot = min_sai - min_ent;
        if (min_sai == 60)
            hora_tot--;
        min_tot /= 60;
        hora_tot += min_tot;
        if (hora_tot <= 2)
            valor += 4;
        else
            valor += 4 + (hora_tot - 2) * 1;
    }
    
    printf("\nA garagem arrecadou um total de R$%.2f hoje", valor);

    return 0;
}
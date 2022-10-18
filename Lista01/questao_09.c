/* A prefeitura da “Terra do Nunca” vai realizar suas eleições em urnas eletrônicas, sendo 3 os 
candidatos à prefeitura (Capitão Gancho, Peter Pan e Wendy). Elabore um programa que permita ao 
usuário informar o número de votos de cada um dos candidatos, escrevendo em seguida o resultado 
da eleição. Sabe-se que, caso um dos candidatos tenha mais de 50% dos votos ele é eleito sem 
necessidade de segundo turno. Na “Terra do Nunca” não existem votos nulos ou brancos. */
#include <stdio.h>

int main(void){

    int total, gancho, pan, wendy;
    float porcentG, porcentP, porcentW;

    printf("Informe o numero de votos que o Capitao Gancho recebeu: ");
    scanf("%d", &gancho);
    printf("Informe o numero de votos que o Peter Pan recebeu: ");
    scanf("%d", &pan);
    printf("Informe o numero de votos que a Wendy recebeu: ");
    scanf("%d", &wendy);

    total = gancho + pan + wendy;
    porcentG = (gancho / (1.0 * total)) * 100;
    porcentP = (pan / (1.0 * total)) * 100;
    porcentW = (wendy / (1.0 * total)) * 100;

    if (porcentW > 50 || porcentP > 50 || porcentG > 50){
        if (porcentG > 50)
            printf("\nCapitao Gancho ganhou sem necessidade de segundo turno\nO percentual dos votos foi de: %.2f%% para o Capitao Gancho, %.2f%% para o Peter Pan e %.2f%% para Wendy",
            porcentG, porcentP, porcentW);
        else
            if (porcentP > 50)
                printf("\nPeter Pan ganhou sem necessidade de segundo turno\nO percentual dos votos foi de: %.2f%% para o Capitao Gancho, %.2f%% para o Peter Pan e %.2f%% para Wendy",
                porcentG, porcentP, porcentW);
            else
                printf("\nWendy ganhou sem necessidade de segundo turno\nO percentual dos votos foi de: %.2f%% para o Capitao Gancho, %.2f%% para o Peter Pan e %.2f%% para Wendy",
                porcentG, porcentP, porcentW);
    }
    else{
        if (porcentG == porcentP && porcentP == porcentW)
            printf("\nEmpate entre todos os candidatos\nO percentual dos votos foi de: %.2f%% para o Capitao Gancho, %.2f%% para o Peter Pan e %.2f%% para Wendy",
            porcentG, porcentP, porcentW);
        else
            if ((porcentG > porcentP && porcentP > porcentW) || (porcentG > porcentW && porcentP > porcentG))
                printf("\nSegundo turno entre Capitao Gancho e Peter Pan\nO percentual dos votos foi de: %.2f%% para o Capitao Gancho, %.2f%% para o Peter Pan e %.2f%% para Wendy",
                porcentG, porcentP, porcentW);
            else
                if ((porcentW > porcentP && porcentP > porcentG) || (porcentW < porcentP && porcentW > porcentG))
                    printf("\nSegundo turno entre Peter Pan e Wendy\nO percentual dos votos foi de: %.2f%% para o Capitao Gancho, %.2f%% para o Peter Pan e %.2f%% para Wendy",
                    porcentG, porcentP, porcentW);
                else
                    printf("\nSegundo turno entre Capitao Gancho e Wendy\nO percentual dos votos foi de: %.2f%% para o Capitao Gancho, %.2f%% para o Peter Pan e %.2f%% para Wendy",
                    porcentG, porcentP, porcentW);
    }

    return 0;
}
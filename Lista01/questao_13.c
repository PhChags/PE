/* Considere as viagens que são realizadas entre as cidades de Metrópolis e Gotham City. Sabendo 
que todas as viagens entre estas cidades são feitas sempre dentro de um mesmo dia, elabore um 
programa que permita que um usuário informe o momento exato (hora, minuto, segundo) da sua 
partida e da sua chegada, e que calcule e escreva o tempo total da viagem (também em horas, 
minutos e segundos) */
#include <stdio.h>

int main(void){

    int hora_sai, min_sai, seg_sai, hora_che, min_che, seg_che, hora_fin, min_fin, seg_fin;

    printf("Informe o horario da partida, no formato hh:mm:ss: ");
    scanf("%d:%d:%d", &hora_sai, &min_sai, &seg_sai);
    printf("Informe o horario de chegada, no mesmo formato: ");
    scanf("%d:%d:%d", &hora_che, &min_che, &seg_che);
    
    if (hora_che < hora_sai)
        hora_che += 24;
    hora_fin = hora_che - hora_sai;
    if (min_che < min_sai)
        min_che += 60;
    min_fin = min_che - min_sai;
    if (seg_che < seg_sai)
        seg_che += 60;
    seg_fin = seg_che - seg_sai;
    if (seg_che == 60)
        min_fin--;
    if (min_che == 60)
        hora_fin--;
    
    printf("A viagem durou %d:%d:%d", hora_fin, min_fin, seg_fin);

    return 0;
}
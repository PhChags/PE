/* Faça um programa que leia uma hora (uma variável para hora e outra para minutos) e que calcule 
e mostre a hora convertida em minutos e em segundos. */
#include <stdio.h>

int main(void){

    int horas, minutos;

    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Convertido, %d horas e %d minutos corresponde a %d minutos e %d segundos", 
    horas, minutos, horas * 60, minutos * 60);

    return 0;
}
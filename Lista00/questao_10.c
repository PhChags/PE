/* Fazer um programa que leia uma temperatura em graus Celsius e transforme para Farenheit. 
C = 5/9 (F-32) */
#include <stdio.h>

int main(void){

    float grauC, grauF;
    
    printf("Digite a temperatura em Celsius\n");
    scanf("%f", &grauC);
    
    grauF = (1.8 * grauC) + 32;
    printf("A temperatura em Farenheit eh: %.1f", grauF);

    return 0;
}
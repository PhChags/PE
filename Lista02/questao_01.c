/* Faça um programa que apresente o peso total que será carregado por um caminhão. Sabe-se que 
este caminhão carrega 25 caixas. O peso de cada uma das caixas será informado pelo usuário. */
#include <stdio.h>

int main(void){

    int i;
    float peso, peso_total = 0.0;

    for (i = 0; i < 25; i++){
        printf("Informe o peso, em quilos, da caixa %02d: ", i+1);
        scanf("%f", &peso);
        peso_total += peso;
    }

    printf("\nO peso total carregado por esse caminhao serah de: %.3fkg", peso_total);
 
    return 0;
}
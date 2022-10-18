/* Em uma competição de ginástica olímpica a nota é determinada por um painel de seis juízes. Cada um dos juízes atribui uma nota entre zero e dez para 
o desempenho do atleta. Para calcular a nota final, a nota mais alta e a nota mais baixa são descartadas e é calculada a média das quatro restantes. 
Escreva um programa que leia 6 notas entre zero e dez e calcule a média, de cada um dos 30 atletas, após o descarte da maior e da menor nota. Faça uma função 
que receba as seis notas lidas e que retorne para o programa principal a média calculada. */
#include <stdio.h>
#include <conio.h>

#define gin 3

float calculamedia(float vet[6], float maI, float meN) {
    float meD = 0.0;

    for (int i = 0; i < 6; i++)
        meD += vet[i];
    
    meD -= maI;
    meD -= meN;
    meD /= 4;

    return meD; 
}
int main(void) {
    float notas[6], maior = 0.0, menor = 10, media[gin];
    int i, j;

    for (i = 0; i < gin; i++) {
        for (j = 0; j < 6; j++) {
            printf("Digite a %dº nota da %dº atleta: ", j + 1, i + 1);
            scanf("%f", &notas[j]);

            if (notas[j] >= maior)
                maior = notas[j];
            if (notas[j] <= menor)
                menor = notas[j];
        }
        media[i] = calculamedia(notas, maior, menor);
        printf("\n\n");
        maior = 0;
        menor = 10;
        getch();
    }
    for (i = 0; i < gin; i++)
        printf("A media da %dº atleta eh %.2f\n\n", i + 1, media[i]);

    return 0;
}
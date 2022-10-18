/* Foi realizada uma pesquisa sobre as características físicas de 50 habitantes de uma certa região. 
De cada habitante foram coletados os seguintes dados: altura, idade e cor dos olhos (A-azuis, V-verdes ou C-castanhos). 
Faça um programa que leia estes dados e que calcule e mostre:
    • a média das idades;
    • a maior e a menor altura;
    • a quantidade de pessoas de olhos castanhos que possuam idade acima da média calculada. */
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define hab 50

struct pesquisa
{
    int idade;
    float altura;
    char c_olhos[2];
};
typedef struct pesquisa typsq;

int main(void)
{
    typsq vetInfo[hab];
    float maiorA = 0.0, menorA = 2.00, mediaI = 0.0;
    int count = 0;

    for (int i = 0; i < hab; i++)  {
        printf("Informe a idade do %dº habitante: ", i + 1);
        scanf("%d", &vetInfo[i].idade);
        printf("Informe a altura desse habitante: ");
        scanf("%f", &vetInfo[i].altura);
        printf("Informe a cor dos os olhos desse habitante: ");
        scanf(" %c", &vetInfo[i].c_olhos);

        mediaI += vetInfo[i].idade;
        if (vetInfo[i].altura > maiorA)
            maiorA = vetInfo[i].altura;
        if (vetInfo[i].altura < menorA)
            menorA = vetInfo[i].altura;
        
        getch();
        printf("\n\n");
    }
    
    mediaI /= (hab * 1.0);

    for (int j = 0; j < hab; j++)
        if (vetInfo[j].idade > mediaI && strcmp(vetInfo[j].c_olhos, "C") == 0)
            count++;

    printf("A media de idade dos %d habitantes eh de: %.2f", hab, mediaI);
    printf("\nDentre os %d habitantes a maior altura eh: %.2f", hab, maiorA);
    printf("\nDentre os %d habitantes a menor altura eh: %.2f", hab, menorA);
    printf("\nDentre os %d habitantes %d tem olhos castanhos e estao acima da media de idade %.2f", hab, count, mediaI);

    return 0;
}
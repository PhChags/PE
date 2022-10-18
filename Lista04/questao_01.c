/* A prefeitura de uma cidade fez uma pesquisa com seus habitantes, coletando dados sobre  salário, idade e número de filhos. 
Faça um programa que leia os dados de 20 pessoas, e que calcule e mostre:
    • a média de salário da população;
    • a média do número de filhos;
    • o maior salário. */
#include <stdio.h>
#include <conio.h>

#define pess 20

struct pesquisa {
    float salario;
    int idade;
    int n_filhos;
};
typedef struct pesquisa typsq;

int main(void) {
    typsq vetInfo[pess];
    float mediaS = 0.0, maiorS = 0.0;
    int mediaF = 0;

    for (int i = 0; i < pess; i++) {
        printf("Digite a idade da %dº pessoa: ", i + 1);
        scanf("%d", &vetInfo[i].idade);
        printf("Digite o salario dessa pessoa: R$ ");
        scanf("%f", &vetInfo[i].salario);
        printf("Digite a quantidade de filhos dessa pessoa: ");
        scanf("%d", &vetInfo[i].n_filhos);

        mediaF += vetInfo[i].n_filhos;
        mediaS += vetInfo[i].salario;
        if (vetInfo[i].salario > maiorS)
            maiorS = vetInfo[i].salario;
        
        getch();
        printf("\n\n");
    }
    
    printf("A media salarial das %d pessoas eh de: R$%.2f", pess, (mediaS / pess));
    printf("\nA media de filhos das %d pessoas eh de: %.2f", pess, (mediaF / (pess * 1.0)));
    printf("\nO maior salario dentre as %d pessoas eh de: R$%.2f", pess, maiorS);

    return 0;
}
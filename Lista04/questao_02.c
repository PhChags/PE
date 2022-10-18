/* Foi feita uma estatística em 20 estados brasileiros para coletar dados sobre acidentes de  trânsito. 
Foram informados dados como: a sigla do estado, o número de veículos, e a quantidade  de acidentes. Faça um programa que calcule e mostre:
    • a sigla do estado que possui maior número de carros;
    • considerando o número de acidentes e o número de carros que circulam no estado, informar o estado com menor índice de acidentes de trânsito;
    • o número total de acidentes de trânsito computado. */
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define estados 5

struct estatistica {
    char sigla[2];
    int n_veiculos;
    int acidentes;
};
typedef struct estatistica tyestt;

int main(void) {
    tyestt vetInfo[estados];
    int maisV = 0, nt_acidentes = 0;
    float menorI = 1.1;
    char copy1[20], copy2[20];

    for (int i = 0; i < estados; i++) {
        printf("Informe a sigla do estado: ");
        scanf(" %s", vetInfo[i].sigla);
        printf("Informe o numero de veiculos de %s: ", vetInfo[i].sigla);
        scanf("%d", &vetInfo[i].n_veiculos);
        printf("Informe a quantidade de acidentes ocorridos nesse estado: ");
        scanf("%d", &vetInfo[i].acidentes);

        nt_acidentes += vetInfo[i].acidentes;
        if (vetInfo[i].n_veiculos > maisV) {
            maisV = vetInfo[i].n_veiculos;
            strcpy(copy1, vetInfo[i].sigla);
        }
        if (((vetInfo[i].acidentes * 1.0) / vetInfo[i].n_veiculos) < menorI) {
            menorI = (vetInfo[i].acidentes * 1.0) / (vetInfo[i].n_veiculos);
            strcpy(copy2, vetInfo[i].sigla);
        }
        
        getch();
        printf("\n\n");
    }

    printf("O estado com mais veiculos eh o %s", copy1);
    printf("\nO estado com o menor indice de acidentes eh o %s", copy2);
    printf("\nO numero total de acidentes eh %d", nt_acidentes);

    return 0;
}
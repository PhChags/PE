#include <stdio.h>
#include <string.h>
#include <conio.h> 

#define N 2

struct aluno{
    char mat[7];
    char nome[40];
    float CR;
    int trancados;
};
typedef struct aluno tyaln;

void preenche(tyaln vet[N]) {
    int i;
    for (i = 0; i < N; i++) {
        printf("\n\nDigite o nome do aluno: ");
        scanf(" %s", vet[i].nome);
        printf("Digite a matriculas: ");
        scanf(" %s", vet[i].mat);
        printf("Digite o CR: ");
        scanf("%f", &vet[i].CR);
        printf("Digite quantos periodos trancou: ");
        scanf("%d", &vet[i].trancados);

        getch();
    }
}
void ordena (tyaln vet[N]) {

}
void imprime(tyaln vet[N]) {
    int i;
    for (i = 0; i < N; i++) {
        printf("\n_____________\n");
        printf("\n| %s |", vet[i].nome);
        printf("\n| %s |", vet[i].mat);
        printf("\n| %.2f    |", vet[i].CR);
        printf("\n| %d       |", vet[i].trancados);
        printf("\n------------");
    }
}
int main(void) {  
    tyaln vetInfo[N];
    preenche(vetInfo);
    imprime(&vetInfo);
    return 0;
}
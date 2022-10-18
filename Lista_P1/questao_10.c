/* Faça um programa que leia um conjunto de dados sobre os N alunos de uma turma. Para cada aluno será lido o seu nome, 
suas 4 notas e seu ano de ingresso na faculdade. O programa deve calcular a média de cada aluno e indicar o nome do aluno 
que obteve a maior média (é possível que existam vários alunos). Deve ser usado um vetor de estruturas. */
#include <stdio.h>
#include <conio.h>

struct alunos{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    char nome[100];
    int ano;
};
typedef struct alunos tyaln;

void maiorN(int N, tyaln vet[N], float media, float *maior) {
    for (int a = 0; a < N; a++) {
        media = ((vet[a].nota1 + vet[a].nota2 + vet[a].nota3 + vet[a].nota4) / 4);
        if (media > *maior)
            *maior = media;
    }
}
int main(void) {
    int N, i, j;
    float maior = 0.0, media = 0.0;

    printf("Informe quantos alunos tem na turma: ");
    scanf("%d", &N);

    tyaln vetInfo[N];

    for (i = 0; i < N; i++) {
        printf("\n\nDigite o nome do aluno: ");
        scanf(" %[^\n]s", vetInfo[i].nome);
        printf("Digite o ano em que %s entrou na faculdade: ", vetInfo[i].nome);
        scanf("%d", &vetInfo[i].ano);
        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &vetInfo[i].nota1);
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &vetInfo[i].nota2);
        printf("Digite a terceira nota do aluno: ");
        scanf("%f", &vetInfo[i].nota3);
        printf("Digite a quarta nota do aluno: ");
        scanf("%f", &vetInfo[i].nota4);

        getch();
    }
    
    maiorN(N, vetInfo, media, &maior);
    printf("\n\nO(s) aluno(s) com maior media eh(sao): ");

    for (i = 0; i < N; i++) {
        media = ((vetInfo[i].nota1 + vetInfo[i].nota2 + vetInfo[i].nota3 + vetInfo[i].nota4) / 4);
        if (media == maior)
            printf("\n%s", vetInfo[i].nome);
    }
    
    return 0;
}
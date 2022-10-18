/* Faça um programa que crie uma lista L com números inteiros:
* A lista deve estar ordenada de maneira crescente;
* Crie uma função para Inserir Elementos;
    void insere (&L, elem);
* Crie uma função para Remover Elementos;
    void remove (&L, elem);
* Crie uma função para Buscar Elementos;
    int busca (&L, elem, &pos); */
#include <stdio.h>

#define max 20

struct LISTA {
    int dado[max];
    int total;
};
typedef struct LISTA tylis;

int busca(tylis *L, int elm, int *pos) {
    int i = 0;
    while (i < L->total && elm > L->dado[i])
        i++;    
    (*pos) = i;
    if (L->total == i)
        return 0;
    else {
        if (elm == L->dado[i])
            return 1;
        else
            return 0;
    }
}
void imprime(tylis *L) {
    for (int i = 0; i < L->total; i++)
        printf("[%d]\n", L->dado[i]);
}
void insert(tylis *L, int num) {
    int pos, i;
    if (!busca(L, num, &pos)) {
        for (i = L->total; i > pos; i--)
            L->dado[i] = L->dado[i - 1];
        L->dado[i] = num;
        L->total++;
    } else
        printf("Elemento ja existe!\n");
}
void remover(tylis *L, int num) {
    int pos, i;
    if (busca(L, num, &pos)) {
        for (i = pos; i < (L->total - 1); i++)
            L->dado[i] = L->dado[i + 1];
        L->total--;
    } else
        printf("Elemento nao existe!");
}
int main(void) {
    tylis L;
    int N, num;
    
    L.total = 0;
    
    printf("Digite a quantidade de elementos para inserir: ");
    scanf("%d", &N);
    printf("\n");

    for (int i = 0; i < N; i++) {
        printf("Digite o numero para inserir: ");
        scanf("%d", &num);
        insert(&L, num);
    }
    
    printf("\n\nESTADO de L:\n");
    imprime(&L);

    printf("\n\nDigite a quantidade de elementos para remover: ");
    scanf("%d", &N);
    printf("\n");

    for (int j = 0; j < N; j++) {
        printf("Digite o numero para remove-lo: ");
        scanf("%d", &num);
        remover(&L, num);
    }

    printf("\n\nESTADO de L:\n");
    imprime(&L);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define N 4

struct NO {
    int dado;
    struct NO *prox;
};
typedef struct NO tyno;

tyno *insereElem(tyno *L, int num) {
    tyno *el, *aux;
    aux = L;
    el = (tyno *)malloc(sizeof(tyno));
    el->dado = num;
    el->prox = NULL;
    if (L == NULL) {
        L = el;
    } else {
        while(aux->prox != NULL) {
            if (aux->dado == num) {
                printf("Elemento jah existe!\n");
                printf("Digite um numero: ");
                scanf("%d", &num);
                L = insereElem(L,num);
                break;
            }
            aux = aux->prox;
        } if (aux->dado != num && aux->prox == NULL) {
            if (num % 2 == 0) {
                el->prox = L;
                L = el;
            } else {
                aux->prox = el;
            }
        }
    }
    return L;
} 
void imprimeReverso(tyno *L) {
    while (L != NULL) {
        printf("%d -> ", L->dado);
        L = L->prox;
    }
    printf("NULL");
}
tyno* inverteLista(tyno *L){
    tyno *aux1, *aux2, *aux3;
    aux1 = NULL;
    aux2 = L;
    aux3 = aux2->prox;
    do {
        aux2->prox = aux1;
        aux1 = aux2;
        aux2 = aux3;
        if (aux3 != NULL) 
            aux3 = aux3->prox;
    } while (aux2 != NULL);
    
    L = aux1;
    return L; 
}
tyno* apagaPares (tyno *L) {
    tyno *aux1, *lixo, *aux;
    aux1 = NULL;
    aux = L;
    lixo = L;

    while (aux != NULL)
    {
        lixo = aux;
        while (lixo->prox != NULL && lixo->dado % 2 != 0) {
            aux1 = lixo;
            lixo = lixo->prox;
        }

        if (aux1 == NULL) L = lixo->prox;
        else aux1->prox = lixo->prox;

        aux = aux->prox;
        free(lixo);
    }

    return L;
}
tyno* combina(tyno *L1, tyno *L2){
    tyno *aux1, *aux2;
    
    aux1 = L1;
    while (aux1->prox != NULL)
        aux1 = aux1->prox;
    aux1->prox = L2;

    return L1;
}
int main(void) {
    tyno *L1, *L2;
    int num, i;
    
    L1 = NULL;
    printf("\n------ CRIANDO L1 ------\n");
    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        L1 = insereElem(L1,num);
    }
    
    L2 = NULL;
    printf("\n------ CRIANDO L2 ------\n");
    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        L2 = insereElem(L2,num);
    }
    
    printf("\n\n L1 -> ");
    imprimeReverso(L1);
    printf("\n\n L2 -> ");
    imprimeReverso(L2);
    
    printf("\n\n L1inv -> ");
    L1 = inverteLista(L1);
    imprimeReverso(L1);
    printf("\n\n L2inv -> ");
    L2 = inverteLista(L2);
    imprimeReverso(L2); 
    
    printf("\n\n L1 -> ");
    L1 = combina(L1,L2);
    imprimeReverso(L1);

    printf("\n\n L1apg -> ");
    L1 = apagaPares(L1);
    imprimeReverso(L1);
     
    return 0;
}
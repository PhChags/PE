/* Faça um programa que leia dois vetores X e Y com números reais e escreva na tela as seguintes opções para o usuário: 
somar X e Y, subtrair Y de X, pesquisar um elemento em X e Y, mostrar X e Y e finalizar o programa. 
Devem ser criadas funções para: somar, subtrair, preencher, mostrar e procurar elemento. */
#include <stdio.h>

char menu() {
    char op;
    
    printf("\n\nEscolha uma operacao: \n");
    printf("+: para adicao\n");
    printf("-: para subtracao\n");
    printf("@: para pesquisar um elemento\n");
    printf("#: para mostrar vetores\n");
    printf("!: para encerrar\n");
    printf("===> ");
    scanf(" %c", &op);
    
    return op;
}
int opValido(char op) {
    if (op == '+'|| op == '-'|| op == '@'|| op == '#' || op == '!')
        return 1;
    else
        return 0;
}
void preencheVetor(float *v, int n, char *nomeVet) {
    printf("\n\nPreenchendo o VETOR %s\n", nomeVet);
    for (int i = 0; i < n; i++) {
        printf("Digite um numero para a posicao [%d]: ", i);
        scanf("%f", &v[i]);
    }
}
void desenhaVetor(float *v, int n, char *nomeVet) {
    printf("\n\nVETOR %s\n", nomeVet);
    printf("[  ");
    for (int i = 0; i < n; i++)
        printf("%.2f  ", v[i]);
    printf("];");
}
int confereCta(float *v1, float *v2, int n, float e) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v1[i] == e || v2[i] == e)
            return 1;
        count++;
    }
    if (count == n)
        return 0;
}
void impPos(float *v1, float *v2, int N, float e) {
    for (int i = 0; i < N; i++) {
        if (e == v1[i])
            printf("\n\nO elemento %.2f se encontra no VETOR X na posicao[%d]", e, i);
        else if (e == v2[i])
            printf("\n\nO elemento %.2f se encontra no VETOR Y na posicao[%d]", e, i);
    }
}
void soma(float *vet1, float *vet2, int n) {
    float vetsoma[n];
    printf("\n\nO VETOR SOMA EH: \n");
    printf("[  ");
    for(int i = 0; i < n; i++) {
        vetsoma[i] = vet1[i] + vet2[i];
        printf("%.2f  ", vetsoma[i]);
    }
    printf("];");
}
void subtrai(float *vet1, float *vet2, int n) {
    float vetsbt[n];
    printf("\n\nO VETOR SUBTRACAO EH: \n");
    printf("[  ");
    for(int i = 0; i < n; i++) {
        vetsbt[i] = vet1[i] - vet2[i];
        printf("%.2f  ", vetsbt[i]);
    }
    printf("];");
}
void operacao(float *v1, float *v2, char op,  int n) {
    float elm;
    switch (op) {
        case '+': 
            soma(v1, v2, n);
            break;
        case '-': 
            subtrai(v1, v2, n);
            break;
        case '@': 
            printf("\nQual elemento procuras?: ");
            scanf("%f", &elm);
            if (confereCta(v1, v2, n, elm))
                impPos(v1, v2, n, elm);
            else
                printf("\n\nO elemento %.2f nao se encontra em nenhum dos vetores", elm);
            break;
        case '#': 
            printf("\nOs vetores sao: ");
            desenhaVetor(v1, n, "X");
            desenhaVetor(v2, n, "Y");
            break;
    }
}
int main(void) {
    int N;
    char op;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);

    float vet1[N], vet2[N];
    preencheVetor(vet1, N, "X");
    preencheVetor(vet2, N, "Y");

    op = menu();
    while (op != '!') {
        if (opValido(op)) 
            operacao(vet1, vet2, op, N);
        else 
            printf("\n\nOperacao invalida!");
        op = menu();
    }

    return 0;
}
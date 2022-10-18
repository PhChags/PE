#include <stdio.h>

#define N 3

void preencheMatriz(int mat[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++) {
            printf("Digite a posicao [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
}
void escreveMatriz(int mat[N][N]) {   
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) 
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}
int opValido(char op) {
    if (op == 1|| op == 2 || op == 3|| op == 4)
        return 1;
    else
        return 0;
}
void menu (){
    printf("\n\nMENU: \n");
    printf("1 - (A + B)\n");
    printf("2 - (A - B)\n");
    printf("3 - (A * B)\n");
    printf("4 - Fim do Programa\n");
    printf("==> ");
}
void soma (int mat[N][N], int maT[N][N]) {
    int i, j, mSoma[N][N];
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++)
            mSoma[i][j] = mat[i][j] + maT[i][j];
    escreveMatriz(mSoma);
}
void subtrai (int mat[N][N], int maT[N][N]) {
    int i, j, mSub[N][N];
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++)
            mSub[i][j] = mat[i][j] - maT[i][j];
    escreveMatriz(mSub);
}
void multiplica (int mat[N][N], int maT[N][N]) {
    int i, j, mMult[N][N];
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++)
            mMult[i][j] = mat[i][j] * maT[j][i];
    escreveMatriz(mMult);
}
void operacao(int mat[N][N], int maT[N][N], int op) {
    switch (op) {
        case 1: 
            printf("\nA soma eh: \n");
            soma(mat, maT);
            break;
        case 2: 
            printf("\nA subtracao eh: \n");
            subtrai(mat, maT);
            break;
        case 3: 
            printf("\nA multiplicacao eh: \n");
            multiplica(mat, maT);
            break;
    }
}
int main(void) {
    int mat[N][N], maT[N][N], op;
    
    printf("Preenchendo Matriz A");
    preencheMatriz(mat);
    printf("Preenchendo Matriz B");
    preencheMatriz(maT);
    printf("\n\nA matriz A:\n\n");
    escreveMatriz(mat);
    printf("\n\nA matriz B:\n\n");
    escreveMatriz(maT);

    menu();
    scanf("%d", &op);
    while (op != 4)  {
        if (opValido(op)) 
            operacao(mat ,maT ,op);
        else 
            printf("\n\nEsta opcao eh invalida!");
        menu();
        scanf("%d", &op);
    }
       
    return 0;
}
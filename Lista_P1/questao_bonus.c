#include <stdio.h>

#define N 3

void seq_multiplos(int n) {
    if (n > 0) {
        printf("%3d", n);
        return seq_multiplos(n - 2);
    }
}
void preencheMatriz(int mat[N][N], int *maior) {
    int i, j;
    printf("\n\nPreenchendo a Matriz\n");
    
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            printf("Digite a posicao [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
            if (*maior < mat[i][j])
                *maior = mat[i][j];
        }
}
void escreve(int mat[N][N]) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) 
            printf("%4d",mat[i][j]);
        printf("\n");
    }
}
int multDiagonalSecundaria(int mat[N][N]) {    
    int i, mult = 1;
    
    for (i = 0; i < N; i++) 
        mult *= mat[i][N - 1 - i];
    
    return mult;
}
int somaUPDiagonalPrincipal(int mat[N][N]) {
    int i, j, soma = 0;

    for (i = 0; i < N; i++)
        for (j = i + 1; j < N; j++)
            soma += mat[i][j];
    
    return soma;
}
int primos(int mat[N][N]) {
    int count = 0, primos = 0, i, j, k;
    
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) {
            if (mat[i][j] != 0 && mat[i][j] != 1) {
                for (k = 2; k <= mat[i][j] / 2; k++)
                    if (mat[i][j] % k == 0) {
                        count++;
                        break;
                    }
                if (count == 0) {
                    primos++;
                    printf("\nPrimo: %d", mat[i][j]);
                }
            }
            count = 0;
        }

    return primos;
}
int main(void) {    
    int mat[N][N], maior = 0;
    
    preencheMatriz(mat, &maior);
    printf("\n\nA matriz:\n\n");
    escreve(mat);
    
    printf("\n\nA soma dos elementos acima da diagonal principal equivale ah: %d", somaUPDiagonalPrincipal(mat));

    printf("\n\nA multiplicacao da diagonal secundaria eh: %d\n", multDiagonalSecundaria(mat));
    
    printf("\nExistem %d numeros primos nessa matriz", primos(mat));
    
    printf("\n\nA sequencia dos numeros pares positivos menores que o maior numero da matriz (%d), eh:", maior);
    if(maior % 2 != 0)
        maior--;
    else
        maior -= 2;
    seq_multiplos(maior);
        
    return 0;
}
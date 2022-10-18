/* Escreva um programa que gere a tabuada de 1 até um valor n>0 na forma de uma tabela tal que, na posição da linha i e coluna j da tabela, 
deve-se encontrar o valor i*j. Por exemplo, para n=6 o programa deve gerar
        1   2   3   4   5   6
        2   4   6   8   10  12
        3   6   9   12  15  18
        4   8   12  16  20  24
        5   10  15  20  25  30
        6   12  18  24  30  36
A tabuada deve ser guardada em uma matriz, e após a sua criação o programa deve dar ao usuário a opção de 
escolher um número X e ter a sua tabuada impressa. O programa encerra quando o usuário digitar um número 
negativo */
#include <stdio.h>

void desenhaTabuada(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++)
            printf("%4d", i * j);
        printf("\n");
    }
}
int main(void) {
    int N;

    printf("\n\nDigite o numero que deseja que demonstre a tabuada: ");
    scanf("%d", &N);
    printf("\n\n");
    desenhaTabuada(N);

    while (N > 0) {
        printf("\n\nDigite outro numero para que sua tabuada seja demonstrada: ");
        scanf("%d", &N);
        printf("\n\n");
        desenhaTabuada(N);
    }

    return 0;
}
/* Faça um programa que apresente a tabuada de um número N, que será informado pelo usuário. O 
programa deve garantir que o valor digitado para N esteja entre 0 e 9. */
#include <stdio.h>

int main(void){

    int N;

    do
    {
        printf("Digite o numero ao qual deseja saber a tabuada: ");
        scanf("%d", &N);
    } while (N > 9 && N < 0);
    
    printf("01. %02d\n02. %02d\n03. %02d\n04. %02d\n05. %02d\n06. %02d\n07. %02d\n08. %02d\n09. %02d\n10. %2d",
    N, 2 * N, 3 * N, 4 * N, 5 * N, 6 * N, 7 * N, 8 * N, 9 * N, 10 * N);

    return 0;
}
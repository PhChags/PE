/* Faça um programa que escreva uma série com os números inteiros compreendidos entre i e j. O intervalo entre os 
números deve ser k. Crie uma função recursiva imprimeSerie(i,j,k) que escreva os elementos desta série. */
#include <stdio.h>

void serie(int i, int j, int k) {
    if (i <= j) {
        printf("%4d", i);
        serie(i+k, j, k);
    }
}
int main(void) {
    int i,j,k;

    printf("Digite i: ");
    scanf("%d", &i);
    
    do {
        printf("Digite j: ");
        scanf("%d", &j);
    } while (j <= i);
    
    printf("Digite o intervalo k: ");
    scanf("%d", &k);
    printf("[");
    serie(i, j, k);
    printf(" ];");

    return 0;
}
/* Faça um programa que leia um conjunto de números inteiros e que determine os números palíndromos. Palíndromos são números que têm o mesmo valor se 
lidos da esquerda para a direita ou da direita para a esquerda. Exemplo: 44, 232, 1661, etc. O final da leitura é indicado por um número negativo. 
Faça uma função que irá retornar para o programa principal se o número é palíndromo ou não. */
#include <stdio.h>

int palindromo(int n) {
    int invrt, aux;

    invrt = 0;
    aux = n;
    
    while (aux > 0) {
        invrt = (invrt * 10) + (aux % 10);
        aux = aux / 10;
    }
    if (n == invrt)
        return 1;
    else
        return 0;
}
int main(void) {
    int num;
    
    printf("\n\nDigite um numero: ");
    scanf("%d", &num);
    while (num > -1) {
        palindromo(num);
        
        if (palindromo(num))
            printf("\n\n%d eh um palindromo\n", num);
        else
            printf("\n\n%d nao eh um palindromo\n", num);
        
        printf("\n\nDigite um numero: ");
        scanf("%d", &num);
    }

    return 0;
}
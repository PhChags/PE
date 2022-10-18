/* Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica: se 
dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela unidade, e 
outro pelo milhar e pela centena, se somarmos estes dois novos números gerando um terceiro, o 
quadrado deste terceiro número é exatamente o número original de quatro dígitos. 
Por exemplo: 2025 -> dividindo: 20 e 25 -> somando temos 45 -> 452 = 2025.
Escreva um programa para ler um número e verificar se ele obedece a esta característica. */
#include <stdio.h>

int main(void){

    int N, part1, part2, soma;   

    printf("Digite um numero com 4 digitos: ");
    scanf("%d", &N);
    
    part1 = N / 100;
    part2 = N - (part1 * 100);
    soma = part1 + part2;

    if (soma * soma == N)
        printf("Esse numero atende as caracteristicas listadas");
    else
        printf("Esse numero nao atende as caracteristicas listadas");
    
    return 0;
}
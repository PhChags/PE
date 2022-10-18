/* Faça um programa que leia três notas de um aluno com os seus respectivos pesos e que calcule e 
escreva a média ponderada dessas notas. */
#include <stdio.h>

int main(void){

    float nota1, nota2, nota3, mp;
    int peso1, peso2, peso3;
    
    printf("Digite a primeira nota e seu respectivo peso: \n");
    scanf("%f %d", &nota1, &peso1);
    printf("Digite a segunda nota e seu respectivo peso: \n");
    scanf("%f %d", &nota2, &peso2);
    printf("Digite a terceira nota e seu respectivo peso: \n");
    scanf("%f %d", &nota3, &peso3);

    mp = ((peso1 * nota1) + (peso2 * nota2) + (peso3 * nota3)) / (peso1 + peso2 + peso3);

    printf("A media ponderada eh: %.2f", mp);

    return 0;
}
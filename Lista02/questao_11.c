/* Faça um programa que escreva os N primeiros termos de uma PA. O primeiro termo, a1, e a 
razão da PA devem ser lidos. */
#include <stdio.h>

int main(void) {
    float razao, a1, an;

    printf("Informe o primeiro termo da PA: ");
    scanf("%f", &a1);
    printf("Informe a razao da PA: ");
    scanf("%f", &razao);
    printf("\n\n");

    for (int i = 1; i <= 7; i++){
        an = a1 + ((i - 1) * razao);
        printf("%.2f\n", an);
    }
    printf("\n");

    return 0;
}
/* Faça um programa que leia a altura e o sexo de uma pessoa e escreva o seu peso ideal, utilizando as 
seguintes fórmulas:
• para homens: (72,7 * altura) – 58,0
• para mulheres: (62,1 * altura) – 44,7 */
#include <stdio.h>
#include <string.h>

int main(void){

    char sexo[20];
    float altura, pesoIdeal;

    printf("Informe seu sexo: ");
    scanf(" %s", &sexo);
    printf("Informe sua altura em metros: ");
    scanf("%f", &altura);

    if (strcmp(sexo, "masculino"))
        pesoIdeal = (72.7 * altura) - 58.0;
    else
        if (strcmp(sexo, "feminino"))
            pesoIdeal = (62.1 * altura) - 44.7;
        else    
            printf("Sexo invalido");
    printf("Seu peso ideal eh: %.2f", pesoIdeal);

    return 0;
}
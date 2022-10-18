/* Faça um programa que leia o preço de um produto, calcule o seu aumento e mostre a sua 
classificação. 
• Se o preço for menor ou igual a 50, o produto receberá um aumento de 5%
• Se o preço for maior do que 50 e menor ou igual a 100, o aumento será de 10%
• Se o preço for maior do que 100, o aumento será de 15%
A classificação do produto deve ser:
• Barato: até 80 reais (inclusive)
• Normal: entre 80 reais e 120 reais (inclusive)
• Caro: entre 120 reais e 200 reais (inclusive)
• Muito Caro: maior do que 200 reais */
#include <stdio.h>

int main(void){

    float valor;
    
    printf("Informe o valor do produto: R$");
    scanf("%f", &valor);

    if (valor <= 50.00)
        valor *= 1.05;
    else
        if (valor <= 100.00)
            valor *= 1.1;
        else
            valor *= 1.15;

    if (valor < 80.01)
        printf("Barato");
    else
        if (valor < 120.01)
            printf("Normal");
        else
            if (valor < 200.01)
                printf("Caro");
            else
                printf("Muito Caro");

    return 0;
}
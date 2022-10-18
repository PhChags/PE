/* Faça um programa que leia a base e a altura de um retângulo e escreva o seu perímetro, 
a sua área e a sua diagonal. */
#include <stdio.h>
#include <math.h>

int main(void){
    
    float h, b;
    
    printf("Digite a base do retangulo: ");
    scanf("%f", &b);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &h);

    printf("\nO perimetro do retangulo eh: %.2f\n", 2 * (b + h));
    printf("A area do retangulo eh: %.2f\n", b * h);
    printf("A diagonal do retangulo eh: %.2f\n", sqrt((b * b) + (h * h)));

    return 0;
}
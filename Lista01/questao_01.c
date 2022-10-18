/* Faça um programa que leia 3 valores reais e que informe se eles formam um triângulo. Caso seja 
possível formar o triângulo indique se este é equilátero, isósceles ou escaleno. */
#include <stdio.h>

int main(void){
    float a, b, c;
    
    printf("Digite os valores: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a + b <= c || b + c <= a || c + a <= b)
        printf("Triangulo inexistente");
    else
        if (a == b && b == c)
            printf("Triangulo existe e eh equilatero");
        else
            if (a == b || b == c || c == a)
                printf("Triangulo existe e eh isosceles");
            else
            	printf("Triangulo existe e eh escaleno");

    return 0;
}
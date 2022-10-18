/* Faça um programa que leia um valor inteiro e que informe se este valor é par ou impar */
#include <stdio.h>

int main(void) {

    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d eh um numero par", num);
    else
        printf("%d eh um numero impar", num);

    return 0;
}
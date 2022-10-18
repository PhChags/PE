/* Faça um programa que leia uma quantidade não determinada de números inteiros. O programa 
deve calcular e escrever a quantidade de números pares e ímpares, a média aritmética dos 
números pares e a divisão do somatório dos números pares pelo somatório dos números ímpares. 
O número que encerrará a leitura será zero, que não deve ser considerado. */
#include <stdio.h>

int main(void){

    int num, pares = 0, impares = 0, media_arit = 0, soma_imp = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);
    while (num != 0){
        if (num % 2 == 0){
            pares++;
            media_arit += num;
        }
        else{
            impares++;
            soma_imp += num;
        }
        printf("Digite um numero: ");
        scanf("%d", &num);
    }
    
    printf("\nVoce digitou %d numeros pares e %d numeros impares", pares, impares);
    printf("\nA media aritmetrica dos numeros pares eh %.2f", (media_arit / (1.0 * pares)));
    printf("\nA divisao do somatorio dos numeros pares pelo somatorio dos numeros impares eh %.2f", (media_arit / (1.0 * soma_imp)));

    return 0;
}
/* Faça um programa que leia o número de eleitores de um município, o número de votos brancos, 
nulos e validos. Calcule e escreva o percentual que cada um representa em relação ao total de 
eleitores. */
#include <stdio.h>

int main(void){

    int eleitores, brancos, nulos, validos;
    float porcent1, porcent2, porcent3;
    
    printf("Informe o numero de eleitores do municipio: ");
    scanf("%d", &eleitores);
    printf("\nInforme o numero de votos brancos: ");
    scanf("%d", &brancos);
    printf("Informe o numero de votos nulos: ");
    scanf("%d", &nulos);
    printf("Informe o numero de votos validos: ");
    scanf("%d", &validos);

    porcent1 = brancos / (1.0 * eleitores);
    porcent2 = nulos / (1.0 * eleitores);
    porcent3 = validos / (1.0 * eleitores);

    printf("\n%.2f%% dos eleitores votaram em branco, %.2f%% votaram em nulo e %.2f%% eleitores votaram em algum candidato", 
    porcent1 * 100, porcent2 * 100, porcent3 * 100);

    return 0;
}
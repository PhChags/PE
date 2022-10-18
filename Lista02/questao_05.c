/* Faça um programa que calcule a área total de uma casa (sala, cozinha, quartos, banheiros, etc). 
Considere que todos os cômodos são retangulares. O usuário deve entrar com a largura e o 
comprimento de cada cômodo da casa. O final da leitura será detectado quando for digitado um 
número negativo. */
#include <stdio.h>

int main(void){

    float area = 0, larg, comp;

    printf("\nInforme a largura do comodo: ");
    scanf("%f", &larg);
    while (larg > 0){
        printf("Informe o comprimento do comodo: ");
        scanf("%f", &comp);
        
        area += (larg * comp);
        
        printf("\nInforme a largura do comodo: ");
        scanf("%f", &larg);
    }

    printf("\nA area da casa eh de %.2f metros", area);   

    return 0;
}
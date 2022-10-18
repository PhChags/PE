/* Faça um programa que leia a idade de um nadador e que calcule e mostre a sua categoria seguindo 
as regras: 
• Categoria Baby: até 4 anos
• Categoria Infantil: 5 – 10 anos
• Categoria Juvenil: 11 – 17 anos
• Categoria Máster: A partir de 18 anos */
#include <stdio.h>

int main(void){

    int idade;
    
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);
    
    if (idade < 5)
        printf("Categoria Baby");
    else
        if (idade > 4 && idade < 11)
            printf("Categoria Infantil");
        else
            if (idade > 10 && idade < 18)
                printf("Categoria Juvenil");
            else
                printf("Categoria Master");
    
    return 0;
}
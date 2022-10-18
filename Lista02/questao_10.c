/* A prefeitura de uma cidade resolveu fazer uma pesquisa entre os seus trabalhadores. Para isso 
ela coletou alguns dados como idade, sexo (M ou F) e salário. Faça um programa que leia estes 
dados e que escreva ao final:
• a média salarial dos homens
• a média salarial das mulheres
• o maior salário encontrado entre as pessoas abaixo de 30 anos.
Obs: O final da leitura de dados é marcado por uma idade negativa. */
#include <stdio.h>

int main(void) {

    char sexo;
    int idade, countM = 0, countF = 0;
    float salario, maior, mediaF = 0, mediaM = 0;

    printf("Informe a idade d@ trabalhad@r: ");
    scanf("%d", &idade);
    while (idade > 0){
        printf("Informe o salario: R$");
        scanf("%f", &salario);
        printf("Informe o sexo: ");
        scanf(" %c", &sexo);

        switch (sexo){
        case 'F':
            mediaF += salario;
            countF++;
            break;
        case 'M':
            mediaM += salario;
            countM++;
            break;
        }
        if (idade < 30)
            if (salario > maior)
                maior = salario;
        printf("Informe a idade d@ trabalhad@r: ");
        scanf("%d", &idade);
    }

    printf("\nA media salarial entre os homens eh de R$%.2f", (mediaM / countM));
    printf("\nA media salarial entre os mulheres eh de R$%.2f", (mediaF / countF));
    printf("\n\nO maior salario entre @s trabalhad@res com menos de 30 anos eh de R$%.2f", maior);

    return 0;
}
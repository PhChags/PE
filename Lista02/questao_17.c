/* Faça um programa que apure os votos de uma eleição presidencial onde concorreram três 
candidatos. Os votos podem ser 1, 2, 3 e 4 e devem ser contados de acordo com a tabela 
abaixo:
                                _________________________
                                |    1 João da Silva    |
                                |    2 José Ramalho     |
                                |    3 Maria de Mattos  |
                                |    4 Voto em Branco   |
                                |    Outros Voto Nulo   |
                                =========================
Calcule e escreva o total de votos de cada candidato, o total de votos brancos, o total de 
votos nulos e o nome do candidato que recebeu mais votos */
#include <stdio.h>

int main(void) {

    int JS = 0, JR= 0, MM = 0, B = 0, N = 0, entrada;

    printf("\n=======================================================================================================================\n");
    printf("                             Para parar o programa basta digitar 0                             ");
    printf("\n=======================================================================================================================\n");

    printf("\nDigite os votos: ");
    scanf("%d", &entrada);
    while (entrada != 0)
    {
        switch (entrada){
        case 1:
            JS += 1;
            break;
        case 2:
            JR += 1;
            break;
        case 3:
            MM += 1;
            break;
        case 4:
            B += 1; 
            break;
        default:
            N += 1;
            break;
        }
        printf("\nDigite os votos: ");
        scanf("%d", &entrada);
    }

    printf("\n\n%d votos para Joao da Silva\n%d votos para Jose Ramalho\n%d votos para Maria de Mattos\n%d votos brancos\n%d votos nulos",
    JS, JR, MM, B, N);

    if (JS > JR && JS > MM)
        printf("\n\nO candidato que recebeu mais votos foi Joao da Silva");
    else
        if (JR > JS && JR > MM)
            printf("\n\nO candidato que recebeu mais votos foi Jose Ramalho");
        else
            printf("\n\nO candidato que recebeu mais votos foi Maria de Mattos");

    return 0;
}
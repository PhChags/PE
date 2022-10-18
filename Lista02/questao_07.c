/* Em um cinema, cada espectador respondeu a uma pesquisa, que perguntava a sua idade e a sua 
opinião em relação a um filme (O – Ótimo; B – Bom; R – Regular; P – Péssimo). Faça um programa
que informe a média de idade das pessoas que responderam o questionário e a porcentagem dada 
para cada uma das respostas. O programa deve terminar quando o usuário digitar uma idade 
negativa. */
#include <stdio.h>

int main(void){
    
    char opiniao;
    float porcentO, porcentB, porcentR, porcentP;
    int media = 0, espectadores = 0, idade, Ovotes = 0, Bvotes = 0, Rvotes = 0, Pvotes = 0;

    printf("\nDigite a idade do espectador: ");
    scanf("%d", &idade);
    while (idade > 0){

        media += idade;
        espectadores++;

        printf("Digite a opiniao do espectador: ");
        scanf(" %c", &opiniao);

        switch (opiniao){
        case 'O':
            Ovotes += 1;
            break;
        case 'B':
            Bvotes += 1;
            break;
        case 'R':
            Rvotes += 1;
            break;
        case 'P':
            Pvotes += 1;
            break;
        }
        printf("\nDigite a idade do espectador: ");
        scanf("%d", &idade);
    }

    porcentO = (Ovotes / (1.0 * espectadores)) * 100;
    porcentB = (Bvotes / (1.0 * espectadores)) * 100;
    porcentR = (Rvotes / (1.0 * espectadores)) * 100;
    porcentP = (Pvotes / (1.0 * espectadores)) * 100;

    media /= espectadores;

    printf("\nA media de idade das pessoa que responderam a enquete eh de %d anos", media);
    printf("\n%.2f%% dos espectadores achou o filme otimo;\n%.2f%% dos espectadores achou o filme bom;\n%.2f%% dos espectadores achou o filme regular;\n%.2f%% dos espectadores achou o filme pessimo;",
    porcentO, porcentB, porcentR, porcentP);
    
    return 0;
}
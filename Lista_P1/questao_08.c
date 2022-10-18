/* Uma empresa que comercializa produtos alimentícios controla seu estoque diariamente. Faça um programa que leia a quantidade de estoque diário do mês 
passado e que calcule a média mensal em estoque. Determine também o maior e menor estoque lidos. */
#include <stdio.h>
#include <string.h>

void mediaMes(int N, int *media, int *maior, int *menor) {
    int a;

    for (int i = 0; i < N; i++) {
        printf("Informe a quntidade de estoque no dia %d: ", i + 1);
        scanf("%d", &a);
        *media += a;

        if (a > *maior)
            *maior = a;
        if (a < *menor)
            *menor = a;
    }
}
int compara (char b[3]) {
    if (strcmpi(b, "sim") == 0 || strcmpi(b, "nao") == 0)
        return 0;
    else
        return 1;
}
int main(void) {
    int N, mes = 0, media = 0, a, maior = 0, menor = 1000000;
    char biss[3];
     
    printf("Informe o mes em que a media serah calculada, com numeros ex: 01 -> Janeiro: ");
    scanf("%d", &mes);

    switch (mes) {
    case 1:
        N = 31;
        mediaMes(N, &media, &maior, &menor);
        break;
    case 2:
        do {
            printf("O ano eh bissexto? sim || nao: ");
            scanf(" %s", biss);
            if (compara(biss))
                printf("Opcao Invalida\n");
        } while (compara(biss));
        if (strcmpi(biss, "sim") == 0) {
            N = 29;
            mediaMes(N, &media, &maior, &menor);
        } else if (strcmpi(biss, "nao") == 0){
            N = 28;
            mediaMes(N, &media, &maior, &menor);
        }
        break;
    case 3:
        N = 31;
        mediaMes(N, &media, &maior, &menor);
        break;
    case 4:
        N = 30;
        mediaMes(N, &media, &maior, &menor);
        break;
    case 5:
        N = 31;
        mediaMes(N, &media, &maior, &menor);
        break;
    case 6:
        N = 30;
        mediaMes(N, &media, &maior, &menor);
        break;
    case 7:
        N = 31;
        mediaMes(N, &media, &maior, &menor);
        break;
    case 8:
        N = 31;
        mediaMes(N, &media, &maior, &menor);
        break;
    case 9:        
        N = 30;
        mediaMes(N, &media, &maior, &menor);
        break;
    case 10: 
        N = 31;
        mediaMes(N, &media, &maior, &menor);
        break;
    case 11:
        N = 30;
        mediaMes(N, &media, &maior, &menor);
        break;
    case 12:
        N = 31;
        mediaMes(N, &media, &maior, &menor);
        break;
    default:
        printf("Mes invalido");
        break;
    }

    printf("\n\nA media do mes foi %.2f", (media / (N * 1.0)));
    printf("\nO menor registro de estoque do mes foi %d", menor);
    printf("\nO maior registro de estoque do mes foi %d", maior);

    return 0;
}
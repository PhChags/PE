/* Escreva um programa para o seguinte problema: determinar se uma palavra A ocorre dentro de uma cadeia de caracteres B, mesmo que de forma não contígua. 
Fazer uma função que retorne 1 se A ocorrer dentro de B e zero, caso contrário. Exemplo:
A = "lanterna"
B = "No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença."
Resposta: A ocorre dentro de B:
    no dia mais cLAro, Na noiTE mais densa, o mal sucumbiRá aNte A minha presença. */
#include <stdio.h>
#include <string.h>
#include <conio.h>

int verifica(char *frs, char *pal) {
    int count = 0;

    for (int i = 0; i < strlen(pal); i++)
        for (int j = 0; j < strlen(frs); j++)
            if (frs[j] == pal[i]){
                count++;
                break;
            }


    if (count == strlen(pal))
        return 1;
    else
        return 0;
}
int main(void) {
    char frase[100], palavra[20];
    int pega;

    printf("Digite a frase: ");
    gets(frase);
    getch();
    printf("Digite a palavra: ");
    scanf(" %s", palavra);

    if (verifica(frase, palavra))
        printf("A ocorre em B");
    else
        printf("A nao ocorre em B");

    return 0;
}

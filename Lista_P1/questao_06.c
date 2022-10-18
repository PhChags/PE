/* Sabendo que o último caractere de uma string é ‘\0’, faça um programa que escreva a quantidade de caracteres desta 
string. Crie uma função recursiva que retorne esta quantidade de caracteres. Não é permitido o uso da função strlen. */
#include <stdio.h>

int contaCaractere(char *str) {
    if (str[0] != '\0')
        return (contaCaractere(&str[1]) + 1);
}
int main(void) {
    char string[20];

    printf("Digite um apalavra: ");
    scanf(" %s", &string);

    printf("A palavra %s tem %d letras", string, contaCaractere(string));

    return 0;
}  


/*Minha primeira versão desse programa 
int contaCaractere(char *str, int *i) {
    switch (str[*i]) {
    case '\0':
        return 0;
        break;
    default:
        (*i)++;
        return (contaCaractere(str, &(*i)) + 1);
        break;
    }
}
int main(void) {
    int i = 0;
    char string[20];

    printf("Digite um apalavra: ");
    scanf(" %s", &string);

    printf("A palavra %s tem %d letras", string, contaCaractere(string, &i));

    return 0;
} */
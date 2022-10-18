/* Faça um programa que leia as informações sobre as N ordens de serviço de um tyosicina mecânica.  Os seguintes dados serão lidos: número da OS, 
valor, tipo de serviço e nome do cliente. O  programa deve apresentar no final:
    • a média de preço dos serviços prestados,
    • os nomes dos clientes que pagaram por serviços acima da média calculada;
    • o nome do cliente que pagou pelo serviço mais caro */
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define tam 70

struct ordem_servico
{
    char t_servico[tam];
    char nomeC[tam];
    int OS;
    float valor;
};
typedef struct ordem_servico tyos;

int main(void)
{
    int N, j, i;
    float mediaSP = 0.0, maisC = 0.0;
    char copy[tam];

    do
    {
        printf("Informe o numero de ordens de servico da sua oficina: ");
        scanf("%d", &N);
    } while (N < 1);
    
    tyos vetInfo[N];

    for (i = 0; i < N; i++) {
        printf("Informe o numero da ordem de sevico: ");
        scanf("%d", &vetInfo[i].OS);
        printf("Informe o valor do servico: R$");
        scanf("%f", &vetInfo[i].valor);
        printf("Informe o tipo de servico prestado: ");
        scanf(" %[^\n]s", vetInfo[i].t_servico);
        printf("Informe o nome do cliente: ");
        scanf(" %[^\n]s", vetInfo[i].nomeC);

        mediaSP += vetInfo[i].valor;
        if (vetInfo[i].valor > maisC) {
            maisC = vetInfo[i].valor;
            strcpy(copy, vetInfo[i].nomeC);
        }
        
        getch();
        printf("\n\n");
    }

    mediaSP /= N;
    printf("A media de preco dos servicos prestados foi eh de R$%.2f", mediaSP);
    printf("\nO cliente que pagou mais caro foi o/a %s", copy);
    printf("\n\nOs clientes que pagaram acima da media foram: ");
    
    for (j = 0; j < N; j++)
        if (vetInfo[j].valor > mediaSP)
            printf("\n%s", vetInfo[j].nomeC);
    
    return 0;
}
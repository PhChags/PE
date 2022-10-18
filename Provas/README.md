# Provas
P1
QUESTÃO 1

Fazer um programa em C que:
a) (valor 1,0) Preencha 2 matrizes quadradas NxN com números inteiros. Crie uma função
chamada preencheMat(mat) que receberá como parâmetro a matriz a ser preenchida.

b) (valor 0,5) Fazer uma função escreveMat(mat) que receberá como parâmetro a matriz a ser
escrita na tela. A função deve escrever a matriz formatada.
Escrever as matrizes preenchidas A e B.

c) (valor 0,5) Após o preenchimento das matrizes A e B, faça uma função menu()que deve
escrever na tela as seguintes operações:

  MENU
  1 – (A + B)
  2 – (A – B)
  3 – (A x B)
  4 – Fim do programa

O usuário poderá escolher qualquer uma das operações e o programa só termina quando o usuário
escolher a opção 4.
d) (valor 1,0) Faça uma função para somar as matrizes A e B. A função deve ter 3 parâmetros, as
matrizes A, B e a matriz resultado: somaMat(A,B,C)
Após a soma chamar a função escreveMat para escrever a matriz resultado.

e) (valor 1,0) Faça uma função para subtrair as matrizes A e B. A função deve ter 3 parâmetros, as
matrizes A, B e a matriz resultado: subtrairMat(A,B,C)
Após a subtração chamar a função escreveMat para escrever a matriz resultado.

f) (valor 1,0) Faça uma função para multiplicar as matrizes A e B. A função deve ter 3 parâmetros,
as matrizes A, B e a matriz resultado: multiplicaMat(A,B,C)
Após a multiplicação chamar a função escreveMat para escrever a matriz resultado.

QUESTÃO 2

Escreva um programa em C que ordene um vetor de alunos:
a) (valor: 1,5) Deve ser criado e preenchido um vetor de estruturas com os dados dos alunos de um
curso, que serão: número de matrícula, nome, CR, quantidade de períodos trancados.
Crie a estrutura:

  struct aluno{
    char mat[7];
    char nome[40];
    float CR;
    int trancados;
  }

  - Deve ser criada uma função para preencher o vetor com os dados de N alunos. A função
  preenche(vet) receberá como único parâmetro o vetor.

  - O campo matrícula é formado por 7 caracteres:
  • 3 primeiros números indicam o semestre e o ano de inscrição do aluno.
  • 3 últimos números indicam a ordem de inscrição naquele semestre.
  • Exemplo: 120.010, indica que o aluno entrou no primeiro semestre de 2020 e que foi
  o décimo aluno a se inscrever.

b) (valor: 1,5) Faça uma função ordena(vet) que deverá ordenar os dados do vetor de acordo
com as seguintes regras:
  → Ordenar por ordem crescente de CR
  → Caso tenha empate, o critério de desempate é pelo número de inscrição menor, ou seja quem
  se inscreveu primeiro. Para isso considere os 3 primeiros caracteres que indicam o semestre e
  ano de inscrição e os três últimos caracteres que indicam a ordem de inscrição.

c) (valor: 0,5) Faça uma função imprime(vet) que deverá receber o vetor e imprimí-lo. Chame
esta função no final do programa para imprimir o vetor já ordenado.

d) (valor 1,5) Crie uma função chamada jubila(vet), que receberá como parâmetro o vetor
preenchido e retornará a quantidade de alunos em situação de jubilamento.
O aluno em situação de jubilamento é aquele que já cursou mais de 10 períodos.

Para este cálculo saiba que o primeiro caractere do número de matrícula indica o semestre que
o aluno entrou na faculdade e que os dois caracteres seguintes indicam o ano. Considere
também semestres trancados não contam como períodos cursados.
• Dentro da função devem ser lidos o semestre e ano atual.
• Para esta função, tanto faz considerar se o vetor já está ordenado ou não.

Exemplo da ordenação:

Considere que os seguintes dados de Entrada sejam lidos para o vetor:

Considere também que não existem alunos cadastrados antes do ano 2000.

                        _______________________________________________________________________
                        |   120.018   |   220.004   |   120.011   |   220.027   |   118.022   |
                        |     Ana     |     Luis    |    Clara    |     Jose    |     Rui     |
                        |     9,0     |      8,5    |     8,5     |      8,5    |     10,0    |
                        |      0      |       0     |      1      |       0     |       2     |
                        =======================================================================
        O vetor de Saída ordenado será:

                        _______________________________________________________________________
                        |   120.011   |   120.004   |   220.027   |   120.018   |   118.022   |
                        |    Clara    |    Luis     |    Jose     |     Ana     |     Rui     |
                        |     8,5     |     8,5     |     8,5     |     9,0     |     10,0    |
                        |       1     |      0      |      0      |      0      |      2      |
                        ======================================================================= 
                        
                        
##


P2
Considere listas simplesmente encadeadas, não circulares e sem nós cabeça.

Escreva um programa em C que:

a) (2,0) Crie uma função para preencher L1 e L2 com N números inteiros cada. Os
elementos não precisam ser ordenados, mas não podem ser incluídos números
repetidos em uma mesma lista.
Um novo elemento deve ser sempre inserido na Lista da seguinte forma:
  - Se o elemento for par, ele deverá ser inserido ao final da lista
  - Se o elemento for ímpar, ele deverá ser inserido no início da lista
Para resolver este item, crie uma única função chamada insereElem(L,elem).
  • Não deve ser criada uma função separada para fazer a busca de elementos.
  • As duas lista L1 e L2 devem possuir a mesma quantidade de nós.


b) (3,0) Após criar L1 e L2, crie uma função chamada inverteLista(L) que deverá
inverter uma Lista passada como parâmetro.
Não devem ser criados novos nós para a criação da lista invertida. Os ponteiros devem
ser ajustados para que a lista resultante seja produzida.
Exemplo:
    L1 -> 15 -> 40 -> 20 -> 58 -> NULL
    L1inv -> 58 -> 20 -> 40 -> 15 -> NULL

c) (2,0) Após inverter L1 e L2 chame a função combina(L1,L2), que receberá como
parâmetros as duas listas invertidas e deverá retornar uma única lista resultante que será
a concatenação de L1+L2.
Exemplo:
    L1 -> 58 -> 20 -> 40 -> 15 -> NULL
    L2 -> 27 -> 31 -> 18 -> 30 -> NULL
Resultado: 
    L1 -> 58 -> 20 -> 40 -> 15 -> 27 -> 31 -> 18 -> 30 -> NULL

d) (2,0) Por último faça uma função apagaPares(L) que receberá a lista concatenada e
deverá apagar todos os elementos pares.
e) (1,0) Ao final do programa imprima a lista resultante de trás pra frente. Para isso, faça a
função imprimeReverso(L).

OBS:
  • Crie uma função imprimeLista(L) para que você possa chamar para fazer a
  conferência das suas operações durante o programa. É uma sugestão, esta função
  não vale ponto.
  • Se você estiver usando o replit, coloque o comando printf("\n\n"); antes do
  return 0 do programa principal. Isto evitará que o replit se perca ao imprimir
  algumas informações.

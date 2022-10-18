LISTA DE EXERCÍCIOS
(resolva todos os exercícios usando STRUCT)
1. A prefeitura de uma cidade fez uma pesquisa com seus habitantes, coletando dados sobre
salário, idade e número de filhos. Faça um programa que leia os dados de 20 pessoas, e que
calcule e mostre:
- a média de salário da população;
- a média do número de filhos;
- o maior salário.
2. Foi feita uma estatística em 20 estados brasileiros para coletar dados sobre acidentes de
trânsito. Foram informados dados como: a sigla do estado, o número de veículos, e a quantidade
de acidentes. Faça um programa que calcule e mostre:
- a sigla do estado que possui maior número de carros;
- considerando o número de acidentes e o número de carros que circulam no estado,
informar o estado com menor índice de acidentes de trânsito;
- o número total de acidentes de trânsito computado.
3. Um funcionário recebe um salário fixo mais 6% de comissão sobre suas vendas. Faça um
programa que leia o salário de um funcionário, o valor total de suas vendas e apresente o seu
salário final. Considere N funcionários (use alocação dinâmica).
4. Faça um programa que leia as informações sobre as N ordens de serviço de um oficina mecânica.
Os seguintes dados serão lidos: número da OS, valor, tipo de serviço e nome do cliente. O
programa deve apresentar no final:
- a média de preço dos serviços prestados,
- os nomes dos clientes que pagaram por serviços acima da média calculada;
- o nome do cliente que pagou pelo serviço mais caro.
5. Foi realizada uma pesquisa sobre as características físicas de 50 habitantes de uma certa
região. De cada habitante foram coletados os seguintes dados: altura, idade e cor dos olhos (A-
azuis, V-verdes ou C-castanhos). Faça um programa que leia estes dados e que calcule e mostre:
- a média das idades;
- a maior e a menor altura;
- a quantidade de pessoas de olhos castanhos que possuam idade acima da média
calculada.
6. Escreva uma função que receba duas structs do tipo dma , cada uma representando uma data
válida, e devolva o número de dias que decorreram entre as duas datas.


 struct dma {
   
   int dia;  
   int mes;              
   int ano;
   
};

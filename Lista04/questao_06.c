/* Escreva uma função que receba duas structs do tipo dma, cada uma representando uma data 
válida, e devolva o número de dias que decorreram entre as duas datas.
    struct dma {
        int dia;
        int mes;
        int ano; 
    }; */
#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};
typedef struct dma tydma;

float diasCorridos(tydma data1, tydma data2) {
    float dias, ano_dia, mes_dia;
    
    if(data1.mes < data2.mes)
        mes_dia = data2.mes - data1.mes;
    else if (data1.mes > data2.mes){
        mes_dia = (data2.mes + 12) - data1.mes;
    } else if (data1.dia <= data2.dia){
        ++mes_dia;
    } else
        mes_dia = 0;
    
    if(data1.dia <= data2.dia)
        dias = data2.dia - data1.dia;
    else {
        dias = (data2.dia + 30.4375) - data1.dia;
        mes_dia--;
    }

    ano_dia = data2.ano - data1.ano;
    if (data1.mes > data2.mes)
        ano_dia--;
    else if (data1.mes == data2.mes && data1.dia > data2.dia)
        ano_dia--;
    dias += ano_dia * 365.25;
    dias += mes_dia * 30.4375;
    
    return dias;
}
int main(void) {
    tydma data1, data2;

    printf("\nDigite a primeira data, no formato: dd/mm/aaaa: ");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    printf("\nDigite a segunda data, no formato: dd/mm/aaaa: ");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);
    
    printf("\n\nSe passaram %.0f dias", diasCorridos(data1,data2));

    return 0;
}
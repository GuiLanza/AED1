
#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    float valor, tipo, aumento;


    //2 Passo: Entrada de Dados

    printf("Digite o Valor investido: ");
    scanf("%f", &valor);

    printf("Digite 1 para o tipo de conta POUPANCA: \n");
    printf("Digite 2 para o tipo de conta FUNDOS DE RENDA FIXA: ");
    scanf("%f", &tipo);

    //3 e 4 Passo: Processamento/Saida de Dados

    if(tipo == 1){

        aumento = valor * 1.03;

        printf("Apos um mes de investimento o valor e = %.2f\n", aumento);
    }else if (tipo == 2){

        aumento = valor * 1.04;

        printf("Apos um mes de investimento o valor e = %.2f\n", aumento);

    }else {

        printf("ERRO (NAO EXISTE ESSA ALTERNATIVA)");
    }
    return 0;
}
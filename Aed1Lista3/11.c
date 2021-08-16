#include <stdio.h>

int main()
{
    //1 Passo: declaracao das variaveis

    float preco;
    float porcentual;
    float precof = 0.0;
    float valorp = 0;
    int parcela = 6;
    int x = 1;

    printf("Digite o Valor do carro: ");
    scanf("%f", &preco);

    //Preco a vista

    printf("O preco do carro pagando a vista e = %.2f reais.\n", preco * 0.8);
    printf("-----------------------------------------------------------------------------------------\n");

    //parcelandode acordo com a tabela

    while(x <= 10){

        porcentual = porcentual + (preco / 100)* 3;
        precof = preco + porcentual;
        valorp = precof / parcela;

        printf("O preco do carro se for parcelado em %d vezes,tera o valor de %.2f reais, sendo cobrado por mes %.2f reais.", parcela, precof, valorp);
        printf("--------------------------------------------------------------------------------------\n");

        parcela = parcela + 6;
        x = x + 1;
    }

    return 0;
}



#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    float codigo, unidades, preco, desconto, precof;

    //2 Passo:Entrada de Dados

    printf("Digite o Codigo do produto comprado: ");
    scanf("%f", &codigo);

    printf("Digite a quantidade de produtos: ");
    scanf("%f", &unidades);

    //3 e 4 Passo:Processamento/Saida de Dados

    if(codigo >= 1 && codigo <= 10){

        preco = 10 * unidades;

        printf("O preço por unidade do produto comprado e = 10 \n");
        printf("O preço total da nota e = %.2f\n", preco);

    }else if(codigo >= 11 && codigo <= 20){

        preco = 15 * unidades;

        printf("O preco por unidade do produto comprado e = 15 \n");
        printf("O preco total da nota e = %.2f\n", preco);

    }else if(codigo >= 21 && codigo <= 30){

        preco = 20 * unidades;

        printf("O preco por unidade do produto comprado e = 20 \n");
        printf("O preco total da nota e = %.2f\n", preco);

    }else if(codigo >= 31 && codigo <= 40){

        preco = 30 * unidades;

        printf("O preco por unidade do produto comprado e = 30 \n");
        printf(") preco total da nota e = %.2f\n", preco);

    }else {

        printf("ERRO: (NAO EXITE ESSE CODIGO)");
    }
    if(preco <= 250){

        desconto = preco * 0.05;

        precof =    preco - desconto;

        printf("O valor do desconto e = %.2f\n", desconto);
        printf("O preco final apos o desconto e = %.2f\n", precof);

    }else if(preco >= 250 && preco <= 500){

        desconto = preco * 0.10;

        precof = preco - desconto;

        printf("O valor do desconto e = %.2f\n", desconto);
        printf("O preco final apos o desconto e = %.2f\n", precof);

    }else if(preco > 500){

        desconto = preco *0.15;

        precof = preco - desconto;

        printf("O valor do desconto e = %.2f\n", desconto);
        printf("O preco final apos o desconto e = %.2f\n", precof);
    }
    return 0;
}
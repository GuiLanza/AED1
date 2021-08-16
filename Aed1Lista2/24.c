
#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    float categoria, preco, precon, imposto, aumento, precof;
    char situacao;

    //2 Passo: Entrada de Dados

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite 1 para selecionar a categoria de Limpeza: \n");
    printf("Digite 2 para selecionar a categoria de Alimentacao: \n");
    printf("Digite 3 para selecionar a categoria de Vestuario: \n");
    printf("Digite a categoria do produto: ");
    scanf("%f", &categoria);

    if(categoria >= 1 && categoria <=3){


    }else {
        printf("ERRO: (NAO EXISTE ESSA CATEGORIA)");

        return 0;
    }
    printf("Digite R para a situacao de necessidade de refrigeracao: \n");
    printf("Digite N para a situacao de nao necessidade de refrigeracao: \n");
    printf("Digite a situacao do produto: ");
    scanf(" %c", &situacao);

    if(situacao == 'R' || situacao == 'r'){

    }else if(situacao == 'N' || situacao == 'n'){

    }else{

        printf("ERRO: (NAO EXISTE ESSA SITUACAO)");

        return 0;
    }
    //3 e 4 Passo:Processamento/Saida de Dados

    if(preco <= 25){

        if(categoria == 1){

            aumento = preco * 0.05;

            printf("O valor do Aumento e = %.2f\n", aumento);

        }else if(categoria == 2){

            aumento = preco * 0.08;

            printf("O valor do Aumento e = %.2f\n", aumento);

        }else if(categoria == 3){

            aumento = preco * 0.10;

            printf("O valor do Aumento e = %.2f\n", aumento);
        }

    }else if(preco > 25){

        if(categoria == 1){

            aumento = preco * 0.12;

            printf("O valor do Aumento e = %.2f\n", aumento);

        }else if(categoria == 2){

            aumento = preco * 0.15;

            printf("O valor do Aumento e = %.2f\n", aumento);

        }else if(categoria == 3){

            aumento = preco * 0.18;

            printf("O valor do Aumento e = %.2f\n", aumento);
        }

    }
        precon = preco + aumento;

    if(situacao == 'r' || categoria == 2){

        imposto = precon * 0.05;

        printf("O valor do imposto e = %.2f\n", imposto);
    }else {

        imposto = precon * 0.08;

        printf("O valor do imposto e = %.2f\n", imposto);
    }

        precof = precon - imposto;

    if(precof <= 50){

        printf("A classificacao do Preco Final e BARATO e o Valor e de: %.2f\n", precof);

    }else if (precof > 50 && precof < 120){

        printf("A classificacao do Preco Final e NORMAL e o Valor e de: %.2f\n", precof);

    }else {
        printf("A classificacao do Preco Final e CARO e o Valor e de: %.2f\n", precof);

    }

    return 0;
}

#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    float valor, resultado;

    //2 Passo: Entrada de Dados

    printf("Digite o Valor do Produto: ");
    scanf("%f", &valor);

    //3 e 4 Passo:Processamento/Saida de Dados

    if(valor <= 50){

        resultado = valor * 1.05;
    }else if (valor > 50 && valor < 100){

        resultado = valor * 1.10;
    } else {
        resultado = valor * 1.15;
    }

    if(resultado <= 80){

        printf("A classificacao do produto e Barato e ele custa: %.2f\n", resultado);

    }else if(resultado > 80 && resultado <= 120){

        printf("A classificacao do produto e Normal e ele custa %.2f\n", resultado);

    }else if (resultado > 120 && resultado <= 200){


        printf("A classificacao do produto e Caro e ele custa %.2f\n", resultado);

    }else {

        printf("A classificacao do produto e Muito Caro e ele custa %.2f\n", resultado);
    }
    return 0;
}
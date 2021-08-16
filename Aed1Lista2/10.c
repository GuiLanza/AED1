
#include<stdio.h>

int main()
{
    //1 Passo:Declaracao das Variaveis

    float preco, distribuidor, juros, total;

    //2 Pass: Entrada de Dados

    printf("Digite o Preco do Custo de Fabrica: ");
    scanf("%f", &preco);

    //3 e 4 Passo: Processamento/Saida de Dados

    if(preco <= 12000){

        distribuidor = (preco * 0.05);

        juros = 0;

        total = preco + juros + distribuidor;

        printf("O preço ao consumidor do Carro Novo e = %.2f\n", total);

    }else if(preco > 12000 && preco <= 25000){

        distribuidor = (preco * 0.10);

        juros = (preco * 0.15);

        total = preco + juros + distribuidor;

        printf("O preco ao consumidor do Carro Novo e = %.2f\n", total);

    }else {

        distribuidor = (preco * 0.15);

        juros = (preco * 0.20);

        total = preco + juros + distribuidor;

        printf("O preco ao consumidor do Carro Novo e = %.2f\n", total);
    }
    return 0;
}
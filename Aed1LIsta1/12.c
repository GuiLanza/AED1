
#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    int numero;

    //2 Passo: Entrada das Variaveis

    printf("Insira um numero real: ");

    //3 Passo: Processamento: le apenas a parte inteira do numero real

    scanf("%d", &numero);

    //4 Passo: Saida de Dados

    printf("A parte inteira do numero e = %d", numero);

    return 0;
}
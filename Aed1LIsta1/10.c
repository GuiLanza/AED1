
#include <stdio.h>

int main()
{
    //1 Passo: declaracao das Variaveis

    int anoatual, anonascimento, idade2050, idadeatual;

    //2 Passo: Entrada de Dados

    printf("Digite o Ano de Nascimento: ");
    scanf("%d", &anonascimento);

    printf("Digite o Ano Atual: ");
    scanf("%d", &anoatual);

    //3 Passo: Processamento

    idadeatual = anoatual - anonascimento;

    idade2050 = 2050 - anonascimento;

    //4 Passo: Saida de Dados

    printf("Sua idade atual e = %d ", idadeatual);

    printf("Sua idade em 2050 sera = %d ", idade2050);

    return 0;
}
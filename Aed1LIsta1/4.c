#include <stdio.h>

int main()

{

    //1 Passo: Declaração das variaveis

    int x1, x2, x3, x4, soma;

    //2 Passo: entrada de dados

    printf("Digite o primeiro numero: ");
    scanf("%d",&x1);

    printf("Digite o segundo numero: ");
    scanf("%d",&x2);

    printf("Digite o terceiro numero: ");
    scanf("%d",&x3);

    printf("Digite o quarto numero: ");
    scanf("%d",&x4);

    //3 Passo: Processamento

    soma = x1 + x2 + x3 + x4;

    //4 Passo:Saida de Dados

    printf("A soma dos 4 numeros e = %d", soma);

    return 0;
}
#include<stdio.h>
 int main()
 {
     //1 Passo: Declaracao das Variaveis

    float area, base, altura;

    //2 Passo: Entradade Dados

    printf("Digite o comprimento da base do triangulo: ");
    scanf("%f", &base);

    printf("Digite o comprimento da altura do triangulo: ");
    scanf("%f", &altura);

    //3 Passo: Processamento

    area = (base * altura)/2;

    //4 Passo: Saida de Dados

    printf("A area do triangulo e = %.1f\n", area);

    return 0;

 }
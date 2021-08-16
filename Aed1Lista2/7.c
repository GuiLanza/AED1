#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das variaveis

    float salario, aumento;

    //2 Passo: Entrada de Dados

    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario);

    //3 e 4 Passo:Processamento/Saida de dados

    if(salario < 500){

        aumento = (salario * 1.3);

        printf("A salario do funcionario com o Aumento e = %.2f\n", aumento);
    }else {
        aumento = salario;

        printf("O salario do funcionario e maior ou igual a 500 entao nao teve aumento: %.2f\n", aumento);
    }
    return 0;
}
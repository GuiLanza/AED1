
#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    float salario, aumento;

    //2 Passo Entrada de Dados

    printf("Digite o Salario do funcionario: ");
    scanf("%f", &salario);

    //3 e 4 Passo: Processamento/Saida de Dados

    if(salario < 300){

        aumento = salario * 1.50;

        printf("O salario do funcionario pos o Aumento e = %.2f\n", aumento);

    }else if(salario >= 300 && salario < 500){

        aumento = salario * 1.40;

        printf("O salario do funcionario pos o Aumento e = %.2f\n", aumento);

    }else if(salario >= 500 && salario < 700){

        aumento = salario * 1.30;

        printf("O salario do funcionario pos o Aumento e = %.2f\n", aumento);

    }else if(salario >= 700 && salario < 800){

        aumento = salario * 1.20;

        printf("O salario do funcionario pos o Aumento e = %.2f\n", aumento);

    }else if(salario >= 800 && salario < 1000){

        aumento = salario * 1.10;

        printf("O salario do funcionario pos o Aumento e = %.2f\n", aumento);

    }else if(salario > 1000){

        aumento = salario * 1.05;

        printf("O salario do funcionario pos o Aumento e = %.2f\n", aumento);

    }
    return 0;
}

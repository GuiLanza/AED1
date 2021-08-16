
#include<stdio.h>

int main()
{
    //1 Passo:Declaracao das Variaveis

    float salario, hextra, hfalta, h, premio;

    //2 Passo: Entrada de Dados

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    printf("Digite a quantidade de horas extras que o funcionario cumpriu: ");
    scanf("%f", &hextra);

    printf("Digite a quantidade de horas que o funcionario faltou: ");
    scanf("%f", &hfalta);

    //3 e 4 Passo:Processamento/Saida de Dados

    h = hextra -(2/3 * (hfalta));

    if(h < 600){

        premio = salario + 100;

    }else if(h >= 600 && h < 1200){

        premio = salario + 200;

    }else if(h >= 1200 && h < 1800){

        premio = salario + 300;

    }else if(h >= 1800 && h < 2400){

        premio = salario + 400;

    }else{

        premio = salario + 500;

    }
    printf("O salario depois de adicionar o premio e = %.2f\n", premio);
}

#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    int idade;

    //2 Passo:Entrada de Dados

    printf("Digite a idade do Nadador: ");
    scanf("%i", &idade);

    //3 e 4 Passo: Processamento/Saida de Dados

    if(idade >= 5 && idade <= 7){

        printf("A categoria do nadador e Infantil");

    }else if(idade >= 8 && idade <= 10){

        printf("A categoria do nadador e Juvenil");

    }else if(idade >=11 && idade <= 15){

        printf("A categoria do nadador e Adolescente");

    }else if(idade >=16 && idade <= 30){

        printf("A categoria do nadador e Adulto");

    }else if(idade > 30){

        printf("A categoria do nadador e Senior");
    }else {

        printf("NAO TEMOS CATEGORIA PARA MENORES DE 5 ANOS");

    }
    return 0;
}
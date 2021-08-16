
#include<stdio.h>

int main()
{

    //1 Passo: declaracao das variaveis

    float nota1, nota2, media, notamaxima;

    //2 Passo:Entrada de Dados

    printf("Digite  o valor total de pontos que o aluno consegue tirar: ");
    scanf("%f", &notamaxima);

    printf("Digite a Primeira Nota: ");
    scanf("%f", &nota1);

    printf("Digite a Segunda Nota: ");
    scanf("%f", &nota2);

    //3 Passo: Processamento

    media = (((nota1 + nota2) / 2) * 100) / notamaxima;

    //4 Passo: Saida de Dados

    if(media < 30 && media > 0){

        printf("Aluno Reprovado");

    } else if(media >= 30 && media < 70){

        printf("Aluno Pode fazer o Exame");

    } else if(media >= 70 && media < 100){

        printf("Aluno Aprovado");

    }

    return 0;
}
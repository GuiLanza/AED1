#include <stdio.h>

int main()
{
    //1 Passo:Declaracao das variaveis

    float nota1, nota2, nota3, nota4, media, notamaxima;

    //2 Passo: Entrada de Dados

    printf("Digite o valor total de pontos que o aluno consegue tirar: ");
    scanf("%f", &notamaxima);

    printf("Digite a Primeira Nota: ");
    scanf("%f", &nota1);

    printf("Digite a Segunda Nota: ");
    scanf("%f", &nota2);

    printf("Digite a Terceira Nota: ");
    scanf("%f", &nota3);

    printf("Digite a Ultima Nota: ");
    scanf("%f", &nota4);

    //3 Passo: Processamento

    media = (((nota1 + nota2 + nota3 + nota4) / 4) * 100) / notamaxima;

    //4 Passo: Saida de Dados

    if(media < 70){

        printf("Aluno Reprovado");

    } else{

        printf("Aluno Aprovado");
    }

    return 0;
}

#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    float aulas, faltas, presenca, notat, notaa1, notaa2, notaa3, notaf, notaf2, frequencia, reavaliacao ;

    //2 Passo: Entrada de Dados

    printf("Digite a quantidade de aulas no semestre: ");
    scanf("%f", &aulas);

    printf("Digite a quantidade de Faltas do aluno: ");
    scanf("%f", &faltas);

     presenca = aulas - faltas;

    frequencia = (presenca * 100) / aulas;

    if(frequencia < 75){

        printf("Aluno REPROVADO Por nao cumprir frequencia minima ");

        return 0;
    }else {

        printf("Frequencia minima foi cumprida \n");

    }
    printf("Digite a Nota de Trabalho: ");
    scanf("%f", &notat);

    printf("Digite a Nota da Primeira Avaliacao: ");
    scanf("%f", &notaa1);

    printf("Digite a Nota da Segunda Avaliacao: ");
    scanf("%f", &notaa2);

    printf("Digite a Nota da Terceira Avaliacao: ");
    scanf("%f", &notaa3);

    //3 e 4 Passo:Processamento/Saida de Dados

    notaf = notat + notaa1 + notaa2 + notaa3;

     if(notaf < 60){

         printf("O aluno devera fazer a reavaliacao \n");

     }else if(notaf > 100){

        printf("ERRO (a soma das notas ultrapassou a nota maxima");

        return 0;

     }else{

         printf("Aluno APROVADO ");

        return 0;
     }

    printf("Digite o valor da reavaliacao: ");
    scanf("%f", &reavaliacao);

    if(notaa1 < notaa2 && notaa1 < notaa3){

        notaf2 = notat + reavaliacao + notaa2 + notaa3;

        if(notaf2 < 60){

            printf("Aluno foi REPROVADO por nao atingir nota minima depois da reavaliacao ");

        }else{

            printf("Aluno APROVADO");

        }
    }else if (notaa2 < notaa1 && notaa2 < notaa3) {

        notaf2 = notat + reavaliacao +notaa1 + notaa3;

        if(notaf2 < 60){

            printf(" Aluno foi REPROVADO por nao atingir nota minina depois da reavaliacao");

        }else{

            printf("Aluno APROVADO");

        }
    }else {

        notaf2 = notat + reavaliacao + notaa1 + notaa2;

        if(notaf2 < 60){

            printf("Aluno foi REPROVADO por nao atingir nota minima depois da reavaliacao");

        }else if(notaf2 > 100){

        printf("ERRO (a soma das notas ultrapassou a nota maxima");

        return 0;

     }else{

            printf("Aluno APROVADO");
        }

    }

    return 0;
}
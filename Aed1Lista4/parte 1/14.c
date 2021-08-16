#include<stdio.h>

int main(){

    int alunos, i = 1, x;
    float media, nota, notat = 0;

    printf("Digite a quantidade de alunos na turma: \n");
    scanf("%i", &alunos);

    x = alunos;

    while(x > 0){

        printf("Digite a nota do aluno %i: \n", i);
        scanf("%f", &nota);

        notat = notat + nota;

        i++;

        x--;
    }

    media = (notat / alunos);

    printf("A media da turma e = %.2f\n", media);

    return 0;
}
#include <stdio.h>

int main(){

    char presenca, turma;
    int alunos, matricula, pres = 0, aus = 0, ausenciap = 0;
    float media;

    for (int i = 1; i <= 14; i++){

        printf("Digite a %i turma para receber o relatorio de dados:", i);
        scanf(" %c", &turma);

        printf("Digite a quantidade de alunos matriculados na sala %i: ", i);
        scanf("%i", &alunos);

        for (int i2 = 1; i2 <= alunos; i2++){

            printf("Digite o numero de matricula do %i aluno\n", i2);
            scanf("%i", &matricula);

            printf("Digite a situacao presencial do %i aluno (A para ausente ou P para presente):\n", i2);
            scanf(" %c", &presenca);

            if (presenca == 'p' || presenca == 'P'){

                pres++;
            }else if(presenca == 'a' || presenca =='A'){

             aus++;
            }else{

                printf("ERRO (NAO EXISTE ESSA SITUACAO)");

                return 0;
            }
        }

         media = (( aus * 100) / matricula);

        printf("A porcentagem de faltas da %i turma foi de: %i \n", i, media);

        if (media > 5){
            ausenciap++;
        }

    }

    printf("A quantidade de turmas com a porcentagem de ausencia acima de 5%% e igual a: %i \n", ausenciap);

    return 0;
}
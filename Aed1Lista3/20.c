#include<stdio.h>

int main(){

    float nota1, nota2, nota3, mediaa, mediap,peso1,peso2,peso3;
    int opcao;


    while(opcao != 3){

        printf("Digite 1 para fazer a media aritmetica: \n");
        printf("Digite 2 para fazer a media ponderada: \n");
        printf("Digite 3 para Sair: ");
        scanf("%i", &opcao);
        if(opcao == 1){

            printf("Digite o primeira nota: ");
            scanf("%f", &nota1);

            printf("Digite o segunda nota: ");
            scanf("%f", &nota2);

            mediaa = ((nota1 + nota2) /2);

            printf("A media aritmetica das duas notas e = %.2f\n", mediaa);
        }else if(opcao == 2){


            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite o peso da primeira nota: ");
            scanf("%f", &peso1);

            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            printf("Digite o peso da segunda nota: ");
            scanf("%f", &peso2);

            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);
            printf("Digite o peso da terceira nota: ");
            scanf("%f", &peso3);

            mediap = (((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) /(peso1 + peso2 + peso3));

            printf("A media ponderada das tres notas e = %.2f\n", mediap);
        }else if(opcao != 3){

            printf("ERRO(ESSA OPCAO NAO EXISTE) \n");
        }

    }

    return 0;
}
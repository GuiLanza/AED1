#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    int valor1, valor2, valor3, valor4;
    int grupo;

    grupo = 1;

    while(grupo <= 5){

        //2 Passo:Entrada de Dados

            printf(" Grupo %d\n", grupo);

        printf("Digite o 1 valor do grupo: ");
        scanf("%d", &valor1);

        printf("Digite o 2 valor do grupo: ");
        scanf("%d", &valor2);

        printf("Digite o 3 valor do grupo: ");
        scanf("%d", &valor3);

        printf("Digite o 4 valor do grupo: ");
        scanf("%d", &valor4);

        //3 Passo: Processamento/todas as possibilidades de botar os valores em forma crescente.

        if(valor1 < valor2 && valor2 < valor3 && valor3 < valor4){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor4, valor3, valor2, valor1);

        }else if(valor1 < valor2 && valor2 < valor4 && valor4 < valor3){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor1, valor2, valor4, valor3);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor3, valor4, valor2, valor1);

        }else if(valor1 < valor3 && valor3 < valor2 && valor2 < valor4){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor1, valor3, valor2, valor4);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor4, valor2, valor3, valor1);

        }else if(valor1 < valor3 && valor3 < valor4 && valor4 < valor2){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor1, valor3, valor4, valor2);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor2, valor4, valor3, valor1);

        }else if(valor1 < valor4 && valor4 < valor3 && valor3 < valor2){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor1, valor4, valor3, valor2);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor2, valor3, valor2, valor1);

        }else if(valor1 < valor4 && valor4 < valor2 && valor2 < valor3){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor4, valor3, valor2, valor1);

        }else if(valor2 < valor1 && valor1 < valor3 && valor3 < valor4){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor2, valor1, valor3, valor4);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor4, valor3, valor1, valor2);

        }else if(valor2 < valor1 && valor1 < valor4 && valor4 < valor3){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor2, valor1, valor4, valor3);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor3, valor4, valor1, valor2);

        }else if(valor2 < valor3 && valor3 < valor1 && valor1 < valor4){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor2, valor3, valor1, valor4);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor4, valor1, valor3, valor2);

        }else if(valor2 < valor3 && valor3 < valor4 && valor4 < valor1){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor2, valor3, valor4, valor1);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor1, valor4, valor3, valor2);

        }else if(valor2 < valor4 && valor4 < valor3 && valor3 < valor1){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor2, valor4, valor3, valor1);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor1, valor3, valor4, valor2);

        }else if(valor2 < valor4 && valor4 < valor1 && valor1 < valor3){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor2, valor4, valor1, valor3);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor3, valor1, valor4, valor2);

        }else if(valor3 < valor1 && valor1 < valor2 && valor2 < valor4){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor3, valor1, valor2, valor4);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor4, valor2, valor1, valor3);

        }else if(valor3 < valor1 && valor1 < valor4 && valor4 < valor2){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor3, valor1, valor4, valor2);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor2, valor4, valor1, valor3);
        }else if(valor3 < valor2 && valor2 < valor1 && valor1 < valor4){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor3, valor2, valor1, valor4);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor4, valor1, valor2, valor3);

        }else if(valor3 < valor2 && valor2 < valor4 && valor4 < valor1){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor3, valor2, valor4, valor1);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor2, valor4, valor1, valor3);
        }else if(valor3 < valor4 && valor4 < valor1 && valor1 < valor2){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor3, valor4, valor1, valor2);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor2, valor1, valor4, valor3);

        }else if(valor3 < valor4 && valor4 < valor2 && valor2 < valor1){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor3, valor4, valor2, valor1);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor1, valor2, valor4, valor3);

        }else if(valor4 < valor1 && valor1 < valor2 && valor2 < valor3){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor4, valor1, valor2, valor3);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor3, valor2, valor1, valor4);

        }else if(valor4 < valor1 && valor1 < valor3 && valor3 < valor2){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor4, valor1, valor3, valor2);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor2, valor3, valor1, valor4);
            //DESCULPA HERIQUE 204 LINHAS DE CODIGO E TRISTE
        }else if(valor4 < valor2 && valor2 < valor1 && valor1 < valor3){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor4, valor2, valor1, valor3);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor3, valor1, valor2, valor4);

        }else if(valor4 < valor2 && valor2 < valor3 && valor3 < valor1){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor4, valor2, valor3, valor1);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor1, valor3, valor2, valor4);

        }else if(valor4 < valor3 && valor3 < valor2 && valor2 < valor1){

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor4, valor3, valor2, valor1);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

        }else {

            printf("A ordem lida e: %d,%d,%d,%d\n", valor1, valor2, valor3, valor4);

            printf("A ordem crescente e: %d,%d,%d,%d\n", valor4, valor3, valor1, valor2);
            printf("A ordem decrescente e: %d,%d,%d,%d\n", valor2, valor1, valor3, valor4);

        }

        grupo++;
    }

    return 0;
}
#include<stdio.h>

int main(){

    int opcao, alcool = 0, gasolina = 0, diesel = 0;

    for(int i =1; i>0;){

        printf("Digite 1 para alcool: \n");
        printf("Digite 2 para Gasolina: \n");
        printf("Digite 3 para Diesel: \n");
        printf("Digite 4 Para Finalizar o Programa: ");
        scanf("%i", &opcao);

        if(opcao == 1){

            alcool++;

            printf("ALCOOL \n");

        }else if(opcao == 2){

            gasolina++;

            printf("GASOLINA \n");

        }else if(opcao == 3){

            diesel++;

            printf("DIESEL \n");

        }else if(opcao == 4){

            printf("MUITO OBRIGADO \n");

            break;
        }else{

            printf("ERRO(OPCAO INVALIDA)\n");
            printf("Digite novamente \n");
        }
    }

    printf("A quantidade de clientes que abasteceram com Alcool e = %i \n", alcool);
    printf("A quantidade de clientes que abasteceram com Gasolina e = %i \n", gasolina);
    printf("A quantidade de clientes que abasteceram com Diesel e = %i \n", diesel);

    return 0;
}
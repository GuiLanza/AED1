#include<stdio.h>

int main(){

    int x;

    while(x!=0){

        printf("Digite um numero(Digite 0 pra finalizar o programa)\n");
        scanf("%i", &x);

        if(x < 0){

            printf("O numero e NEGATIVO: \n");

        }else {

            printf("O numero e POSITIVO: \n");

        }

    }

    return 0;
}
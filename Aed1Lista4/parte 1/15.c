#include<stdio.h>

int main(){

    float n;

    do{

        printf("Digite um numero(Digite 0 para fechar o progama): \n");
        scanf("%f", &n);

        if(n < 0){

            printf("O NUMERO E NEGATIVO\n");

        }else{

            printf("O NUMERO E POSITIVO\n");
        }



    }while(n != 0);

    return 0;
}
#include<stdio.h>


int main(){

 int numero, menorn, maiorn;

 menorn = 429496729;
 maiorn = 0;


    printf("Digite um numero: ");
    scanf("%i", &numero);

    if(numero != 0){
        if(numero < 0){


        printf("Nao se pode utilizar numero negativo: \n");

        }else if(numero > 0 && numero < menorn){

         menorn = numero;
        }
        if(numero > 0 && numero > maiorn){

         maiorn = numero;
        }
    }

    while(numero != 0){

        printf("Digite um numero: ");
        scanf("%i", &numero);

        if(numero != 0){
            if(numero < 0){


             printf("Nao se pode utilizar numero negativo: \n");

            }else if(numero > 0 && numero < menorn){

                menorn = numero;
            }
            if(numero > 0 && numero > maiorn){

                maiorn = numero;
            }
        }
    }

    printf("O MENOR numero entre os que foram digitado e = %i\n", menorn);
    printf("O MAIOR numero entre os que foram digitados e = %i", maiorn);

    return 0;
}
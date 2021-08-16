#include<stdio.h>
#include<math.h>

int main(){

    int numero = 1;

    while(numero > 0){

        printf("Digite um numero inteiro: ");
        scanf("%i", &numero);
        
        if(numero %2 == 0 && numero > 0)

        printf("O numero digitado e par: \n");

        else if(numero %2 == 1 && numero > 0){

            printf("O Numero digitado e impar: \n");
        }else{
            
            printf("Programa Finalizado");
        }

    }

    return 0;
}
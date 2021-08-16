#include<stdio.h>

int main(){

    int numeros, numero, numerom = 0;

   printf("Digite a quantidade de numeros: ");
   scanf("%i", &numeros);

    for (int i = 1; i <= numeros; i++){

       printf("Digite o numero %i: \n", i);
       scanf("%i", &numero);
    
        if(numerom < numero){

         numerom = numero;

        }
   }

   printf("O maior numero digitado e = %i", numerom);

   return 0;
}
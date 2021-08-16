#include<stdio.h>

int main(){

    int numero, par = 0, impar = 0;
    int primo = 1;
    int primos = 0;
    int i = 0;

    for(i = 0 ; i < 10 ; i++){
        primo = 1;
        printf("Digite o %i numero inteiro: ", i+1);
        scanf("%i", &numero);

        for(int x = 2; x < numero; x++)
            if((numero%x)==0){

            primo = 0;
        }

        if(primo == 1)

        primos++;
    }

    printf("Entre os numeros contem %i numeros primos", primos);

    return 0;
}
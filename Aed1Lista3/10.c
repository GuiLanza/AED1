#include<stdio.h>

int main(void){

    int numero, par = 0, impar = 0;
    int primo = 1;
    int primos = 0;
    int i;

    for(i = 0 ; i < 10 ; i++){
        primo = 1;
        printf("Digite o %i numero: ", i+1);
        scanf("%i", &numero);

        if(numero%2==0){
        par += numero;

        }else{
        impar += numero;
        }

        for(int x = 2; x < numero; x++){
            if((numero % x) == 0){

            primo = 0;
            }
        }

        if(primo == 1){
        primos += numero;
        }
    }

    printf("A soma dos numeros pares e = %i\n", par);
    printf("A soma dos numeros primos e = %i", primos);

    return 0;

}
#include<stdio.h>

void divisao(int numero1, int numero2){

    if(numero1 % numero2 == 0){

        printf("0");

    }else if(numero1 % numero2 != 0){

        for(; numero2<= numero1; numero2++){

            if(numero1 % numero2 == 0){
                printf("%i", numero1);
            }
        }
    }
}

int main(){

    int dividendo, divisor;

    printf("Digite o valor do Dividendo: ");
    scanf("%i", &dividendo);
    
    printf("Digite o valor do Divisor: ");
    scanf("%i", &divisor);

    divisao(dividendo, divisor);


 return 0;
}
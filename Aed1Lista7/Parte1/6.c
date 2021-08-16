#include <stdio.h>

int mdc(int num1, int num2) {

    int resto;

    do{
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    }while(resto != 0);

    return num1;
}

int main(void){

    int numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    mdc(numero1, numero2);

    printf("O mdc de %i e %i e = %i", numero1, numero2, mdc(numero1, numero2));
    
    return 0;
}
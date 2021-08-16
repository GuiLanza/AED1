#include<stdio.h>
#include<math.H>

int potencia(int x, int y){

    int resultado;

   resultado = pow(x,y);

   return resultado;
}

int main(void){

    int numero1, numero2, resultado;

    printf("Digite um numero para ser elevado pela potencia: ");
    scanf("%i", &numero1);

    printf("Digite o valor da potencia: ");
    scanf("%i", &numero2);

    resultado = potencia(numero1, numero2);

    printf("O valor da potencia e = %i", resultado);

    return 0;
}
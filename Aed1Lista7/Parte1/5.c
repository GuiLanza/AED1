#include<stdio.h>

int adicao(int num){

    int i, y = 0 , resultado = 0;

    y = num;

    for(i = 0; i < y;i++){

        resultado += num;

        num--;
    }


    return resultado;
}

int main(void){

    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    adicao(numero);

    printf("O valor da soma do numero 1 ate o numero %i e = %i", numero, adicao(numero));
}
#include<stdio.h>

int soma(int termo){

    float result;

    if(termo == 1){

        return 1; 
    }

    result = ((1/termo) + soma(termo - 1));
    
    return result;
}

int main(void){

    int numero, i;
    float resultado;

    printf("Digite um numero: ");
    scanf("%i", &numero);

    printf("1");

    for(i = 0;i < numero - 1;i++){

        printf(" + ");
        printf("1/%i", i + 2 );

    }
    
    resultado = soma(numero);

    printf("\nSoma e = %.2f", resultado);

    return 0;
}
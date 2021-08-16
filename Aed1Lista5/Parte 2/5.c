#include<stdio.h>
#include<math.h>

void verificacao(int n){

    if(n > 0){

        printf("O numero digitado e Positivo.");

    }else if (n == 0){

        printf("O numero digitado e Nulo.");

    }else{

        printf("O numero digitado e Negativo.");
    }

}
int main(){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    verificacao(numero);
}
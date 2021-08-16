#include<stdio.h>
#include<math.h>

void Divisores(int n){
    int soma = 0;

    for (int divisores = 1; divisores < n; divisores++){

        if (n % divisores == 0){

            soma += divisores;
            
        }
    }
    
    printf("Soma = %d", soma);
}

int main(){
    int n = 1;

    printf("Digite um numero inteiro positivo qualquer.\n");
    scanf("%d", &n);

    if(n>0){

     Divisores(n);
    }

    return 0;
}
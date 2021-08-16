#include<stdio.h>

int main(){


    int x,n;

    printf("Digite um numero pra fazer a tabuada: ");
    scanf("%i", &x);

    for(n = 1;n <= 10;n++){

        printf("%ix%i=%i\n", x,n,x*n);
    }

    return 0;
}
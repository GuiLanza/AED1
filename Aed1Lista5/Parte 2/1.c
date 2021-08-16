#include<stdio.h>


void soma( int n1,int n2)
{
    int total = 0;
    for (n1 = 1; n1 <= n2; n1++)
    {
        total += n1;
    }
    printf("A soma dos numeros inteiros entre 1 e %i e: %i ", n2, total);
}

int main(){

    int i = 1;
    int n;

    printf("Insira o valor limite para que sejam somados os valores do numeros inteiros:\n");
    scanf("%i", &n);

    soma(i, n);

    return 0;
}
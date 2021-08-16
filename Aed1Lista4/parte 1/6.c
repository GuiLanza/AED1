#include<stdio.h>


int main(){

    int x, y;

    printf("Digite um numero");
    scanf("%i", &x);
    y=x;

    while(y>0){

        printf("%i\n", x);

        y--;
    }
}
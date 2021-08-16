#include<stdio.h>


int main(){

    int N;

    printf("Digite a quantidade de vezes que quer reproduzir a palavra PROGRAMACAO \n");
    scanf("%i", &N);

    while(N>0){

        printf("PROGRAMACAO\n");

        N--;
    }

    return 0;
}
#include<stdio.h>

int main(){

    int x,y, sim = 0, nao = 0;

    for(int z = 1;z<=10;z++){

        printf("Digite o %i numero: ", z);
        scanf("%i", &y);

        if(y>=10 && y<=20){

            sim++;
        }else{

            nao++;
        }
    }

    printf("A quantidade de numeros escritos que esta entre 10 e 20 e = %i\n", sim);
    printf("A quantidade de numeros escritos que NAO esta entre 10 e 20 e = %i", nao);

    return 0;
}
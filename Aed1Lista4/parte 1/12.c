#include<stdio.h>

int main(){


    int x = 0, y;

    for(int z = 1;z<=10;z++){

        printf("Digite o %i numero: ", z);
        scanf("%i", &y);

        if(y>0){

            x++;
        }

    }

    printf("A quantidade de numeros negativos e = %i\n", x);

    return 0;
}
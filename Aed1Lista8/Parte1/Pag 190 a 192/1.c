#include <stdio.h>

int main(){  

int i, x[6], par = 0, impar = 0;  

    for(i = 0; i < 6; i++){

        printf("Informe o numero %i do x:", i + 1);

        scanf("%d", &x[i]);

        if(x[i] % 2 == 0){

        par++;

        }else{

        impar++;

    }

}

    printf("Todos os numeros pares: ");

    for(i = 0; i < 6; i++){

        if(x[i] % 2 == 0){

        printf("%d ", x[i]);

        }

    }

    printf("\n A quantidade de numeros pares e = %d", par);  


    printf("Todos os numeros impares sao: ");

    for(i = 0; i < 6; i++){

        if(x[i] % 2 != 0){

            printf("%d ", x[i]);

        }

    }

    printf("Quantidade de numeros impar: %d\n", impar);  

    return 0;
}
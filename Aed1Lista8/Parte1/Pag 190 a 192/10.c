#include<stdio.h>

int main(){

    //Entrada das Variaveis

    int vetor1[10], vetor2[5], soma = 0, divisor = 0;
    int i, j;

    for(i = 0;i<10;i++){

        printf("Digite o valor da posicao %i do vetor1: ", i + 1);
        scanf("%i", &vetor1[i]);
       
    }

    for(i = 0; i < 5; i++){

        printf("Digite o valor da posicao %i do vetor2: ", i + 1);
        scanf("%i", &vetor2[i]);

        soma+= vetor2[i];
    }

    //Primeiro Vetor Resultante

    printf("O primeiro vetor resultante e = ");
    for(i = 0;i < 10;i++){
        
        if(vetor1[i] %2 == 0){

            printf("%i ", vetor1[i] + soma);

        }

    }

    //Segundo Vetor Resultante

    printf("\nO segundo vetor resultante e = ");
    
    for(i = 0;i < 10;i++){

        for(j = 0; j < 5; j++){

            if(vetor1[i] %vetor2[j] == 0 && vetor1[i] %2 != 0){

                divisor++;
            }
            
        }   

        printf("%i ", divisor);

        divisor = 0;
        
    }

    return 0;
}
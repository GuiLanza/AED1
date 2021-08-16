#include<stdio.h>

int main(){
    //declarando variaveis

    int idade, idadet = 0;
    int x;
    int avaliacao, otimo = 0, regular = 0, bom = 0;

    for(x = 1;x <= 15; x++){

        printf("Digite a idade da %i pessoa: ", x);
        scanf("%i", &idade);

        printf("Digite 1 para avaliar o filme como: REGULAR \n");
        printf("Digite 2 para avaliar o filme como: BOM \n");
        printf("Digite 3 para avaliar o filme como: OTIMO \n");
        printf("Digite a sua avaliacao: ");
        scanf("%i", &avaliacao);

        if(avaliacao == 3){


            idadet += idade;
            otimo++;

        }else if(avaliacao == 1){

            regular++;

        }else if(avaliacao == 2){

            bom++;

        }else{

            printf("ERRO: (NAO EXISTE ESSA AVALIACAO:");

            return 0;
        }


    }

    printf("A media de idade das pessoas que avaliaram como otimo e = %i\n", idadet/otimo);
    printf("A quantidade de pessoas que avaliaram como REGULAR e = %i\n", regular);
    printf("A porcentagem de pessoas que avaliaram com BOM em relacao a todas as avaliacoes e = %.2f%%", bom * 100 /15);

    return 0;
}
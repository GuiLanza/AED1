#include<stdio.h>

int main(){

    int numero, votos = 0, candidato1 =0, candidato2 = 0, candidato3 = 0, candidato4 = 0, vnulo = 0, vbranco = 0;
    float pnulo, pbranco;

    while(numero != 0){

        printf("Digite 1,2,3 ou 4 para votar em determinado candidato: \n");
        printf("Digite 5 para votar nulo: \n");
        printf("Digite 6 pra votar em branco: ");
        scanf("%i", &numero);

        if(numero == 1){

            candidato1++;
            votos++;
        }else if(numero == 2){

            candidato2++;
            votos++;
        }else if(numero == 3){

            candidato3++;
            votos++;
        }else if(numero == 4){

            candidato4++;
            votos++;
        }else if(numero == 5){

            vnulo++;
            votos++;
        }else if(numero ==6){

            vbranco++;
            votos++;
        }else{

            printf("ERRO(NAO EXISTE ESSA OPCAO) \n");
        }
    }
    pnulo = ((vnulo*100)/votos);

    pbranco = ((vbranco *100)/votos);

    printf("O Total de votos do candidato 1 e = %i\n", candidato1);
    printf("O Total de votos do candidato 2 e = %i\n", candidato2);
    printf("O Total de votos do candidato 3 e = %i\n", candidato3);
    printf("O Total de votos do candidato 4 e = %i\n", candidato4);
    printf("O Total de votos nulos e = %i\n", vnulo);
    printf("O total de votos brancos e = %i\n", vbranco);
    printf("A porcentagem de votos nulos e = %.2f\n", pnulo);
    printf("A porcentagem de votos brancos e = %.2f\n", pbranco);

    return 0;
}
#include<stdio.h>

int main(){

    int m = 0, f = 0, totals = 0, totaln = 0, naom = 0;
    char sexo, resposta;
    int i;
    float media;

    for(i = 0;i < 10; i++ ){
        printf("Digite 'M' para selecionar sexo masculino: \n");
        printf("Digite 'F' para selecionar sexo feminino: \n");
        printf("Digite o sexo da pessoa %i: ", i+1);
        scanf(" %c", &sexo);

        if(sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F'){

            printf("ERRO(SEXO NAO ENCONTRADO)");

            return 0;
        }

        printf("Digite 'S' se a pessoa %i gostou do produto e 'N' caso a pessoa NAO tenha gostado: ", i+1);
        scanf(" %c", &resposta);

        if(resposta =='s'|| resposta == 'S'){
            if(sexo == 'f'|| sexo=='F'){

                f++;
            }
            m++;

            totals++;
        }else if(resposta =='n' || resposta == 'N'){
            if(sexo == 'm' || sexo =='M'){

                m++;
                naom++;
            }

            totaln++;
        }else{

            printf("ERRO(NAO EXISTE ESSA OPCAO)");

            return 0;
        }

    }

    media = ( (naom *100)/m);

    printf("O numero de pessoas que responderam SIM e = %i\n", totals);
    printf("O numero de pessoas que responderam NAO e = %i\n", totaln);
    printf("O numero de MULHERES que responderam SIM e = %i\n", f);
    printf("A porcentagem de HOMENS que responderam NAO entre todos os homens analizados e = %.2f%%", media);


    return 0;
}
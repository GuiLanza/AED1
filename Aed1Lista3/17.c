#include <stdio.h>

int main()
{

    int i = 0;
    int p = 1;
    float canal4 = 0, canal5 = 0, canal7 = 0, canal12 = 0;

    printf("Digite o seu numero do canal dentre os que estao apresentados 4, 5, 7 ou 12 que esta assistindo agora (quado terminar digite 0)\n");

    while(i < 1){

        int numerocanal;

        printf("Digite o numero do canal da pessoa %i: ", p);
        scanf("%d", &numerocanal);

        if(numerocanal != 0 && numerocanal != 4 && numerocanal != 5 && numerocanal != 7 && numerocanal != 12){
            printf("ERRO(Canal invalido)\n");



        }else{
            switch(numerocanal){

                case 0:

                 p = p - 1;
                 i++;

                break;

                case 4:

                 canal4 = canal4 + 1;
                 p = p + 1;

                break;


                case 5:

                 canal5 = canal5 + 1;
                 p = p + 1;

                break;

                case 7:

                 canal7 = canal7 + 1;
                 p = p + 1;
                break;

                case 12:

                canal12 = canal12 + 1;
                p = p + 1;

                break;
            }
        }
    }

    printf("A porcentagem de pessoas no canal  4 e = %.2f%% \n", (canal4 * 100)/ p);
    printf("A porcentagem de pessoas no canal  5 e = %.2f%% \n", (canal5 * 100)/ p);
    printf("A porcentagem de pessoas no canal 7 e = %.2f%% \n", (canal7 * 100)/ p);
    printf("A porcentagem de pessoas no canal  12 e = %.2f%% \n", (canal12 * 100)/ p);


    return 0;
}
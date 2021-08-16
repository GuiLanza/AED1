#include<stdio.h>

int main(){

    //1 Passo: Declaracao das Variaveis

    int x;
    char transacao;
    float preco;
    float totalp,totalv;
    for(x = 1;x < 15; x++){

        printf("Digite o valor do produto %i: ", x);
        scanf("%f", &preco);
        printf("Digite 'V' para transacao a vista e 'P' para a prazo: ");
        scanf(" %c", &transacao);

        if(transacao == 'v' || transacao == 'V'){

            totalv += preco * 0.9;

        }else if(transacao == 'p' || transacao == 'P'){

            totalp += preco;

        }else{

            printf("ERRO(NAO EXISTE ESSA TRANSACAO); ");

            return 0;
        }

    }
    printf("O valor das compras a vista e = %.2f\n", totalv);
    printf("O valor das compras a prazo e = %.2f\n", totalp);
    printf("O valor total das compras e = %.2f\n", totalv + totalp);
    printf("O valor da prismeira prestacao das compras a prazo e = %.2f\n", totalp/3);

    return 0;
}
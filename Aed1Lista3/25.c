#include<stdio.h>


int main(){

 int tipo, codigo;
 float juros, investimento, jurost, investimentot;

    printf("Digite o codigo do cliente: ");
    scanf("%i", &codigo);

    while(tipo > 0){

        printf("Digite 1 para Poupanca: \n");
        printf("Digite 2 para Poupanca Plus: \n");
        printf("Digite 3 para Fundos de renda fixa: \n");
        printf("Digite 0 ou numero negativo: \n");
        scanf("%i", &tipo);

        if(tipo == 1){

           printf("Digite o valor investido: ");
           scanf("%f", &investimento);

           juros = investimento * (1.5/100);

           jurost += juros;
           investimentot += investimento;
        }else if(tipo == 2){

            printf("Digite o Valor do investimento: ");
            scanf("%f", &investimento);

            juros = investimento * (2/100);

            jurost += juros;
            investimentot += investimento;
        }else if(tipo ==3){

            printf("Digite o Valor do investimento: ");
            scanf("%f", &investimento);

            juros = investimento * (4/100);
            investimentot += investimento;
        }else if(tipo > 3){

            printf("ERRO(NAO EXISTE ESSA OPCAO)\n");
        }
    }

    printf("O investimento total do cliente de codigo %i e = %.2f\n", codigo,investimentot);
    printf("O juros total pago ao cliente de codigo %i e = %.2f\n", codigo,jurost);

    return 0;
}
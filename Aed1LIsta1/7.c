
#include <stdio.h>

#include<math.h>

int main()
{
    //1 Passo:declaracao das variaveis

    float deposito, taxa = 1.0 , rendimento, meses, resultado;
    char juros;

    //2 Passo: entrada de dados

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Indique o tipo de juros:(S - Simples ou C - Composto): ");
    scanf(" %c", &juros);

    printf("Digite o valor da taxa do juros/mes (Decimal): ");
    scanf("%f", &taxa);

    printf("Digite o tempo da aplicacao (Meses): ");
    scanf("%f", &meses);

    //3 Passo: processamento

    if(juros == 's'){

         resultado = deposito *  meses *(1 + taxa);

    } else if(juros == 'c'){

         resultado = deposito * pow(( 1 + taxa), meses);
    }

    rendimento = resultado - deposito;

    //4 Passo:Saida de dados

    printf("O rendimento e = %.2f\n", rendimento);
    printf("O resultado do saldo final ( rendimento + deposito) e = %.2f\n", resultado);

     return 0;
}
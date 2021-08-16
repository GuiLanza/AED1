#include <stdio.h>

int main()
{
    //1 Passo: Declaracao das variaveis

   float salario, gratificacao, imposto, total;

    //2 Passo: Entrada de dados

    printf("Digite o salario: ");
    scanf ("%f",&salario);

    //3 Passo: Processamento

    gratificacao = 0.05 * (salario);
    imposto = 0.07 * (salario);
    total =  (salario + gratificacao) - imposto;

    //4 Passo: Saída de dados

    printf("O preco da Gratificacao e = %.2f\n", gratificacao);
    printf("O preco do Imposto e = %.3f\n", imposto);
    printf("O salario pos Gratificacao e descontando a Cobranca de imposto o preco fica = %.4f\n", total);

    return 0;
}

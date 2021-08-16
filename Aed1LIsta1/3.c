#include <stdio.h>
#include <math.h>
int main()
{
    //1 Passo: Declaracao das variaveis

    float numero, raizquadrada;

    //2 Passo: entrada de dados

    printf("Digite o numero: ");
    scanf("%f",&numero);

    //3 Passo: Processamento

    raizquadrada = sqrt(numero);

    //4 Passo: Saida de Dados

    printf("A raiz quadrada do numero e = %.1f\n", raizquadrada);

    return 0;
}
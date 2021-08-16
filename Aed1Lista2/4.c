
#include <stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    float numero1, numero2, numero3, maiornumero;

    //2 Passo: Entrada de Dados

    printf("Digite o Primeiro Numero: ");
    scanf("%f", &numero1);

    printf("Digite o Segundo Numero: ");
    scanf("%f", &numero2);

    printf("Digite o Terceiro Numero: ");
    scanf("%f", &numero3);

    //3 Passo: Processamento

    if(numero1 > numero2 && numero1 > numero3){

        printf("O maior numero e o: %.2f\n", numero1);

    } else if(numero2 > numero1 && numero2 > numero3){

        printf("O maior numero e o: %.2f\n", numero2);
    } else{

        printf("O maior numero e o: %.2f\n", numero3);
    }

    return 0;
}
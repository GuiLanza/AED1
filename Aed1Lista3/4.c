#include <stdio.h>


int main()
{
    //1 Passo: Declaracao das variaveis

    int numero, x;

    //2 Passo: Entrada de dados

    printf("Digite o Numero que voce deseja para a tabuada: \n");
    scanf("%i", &numero);

    //3 e 4 Passo: Processamento/Entrega de Dados

    for( x = 1; x<=10; ++x)

    {

        printf("%ix%i = %i\n", numero, x, x * numero);
    }

    return 0;
}

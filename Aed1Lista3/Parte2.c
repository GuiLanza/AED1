#include <math.h>
#include <stdio.h>

int main()
{
    //input de dados.
    int repeticoes, numero1 = 0, numero2 = 1, numeron;

    printf("Digite a quantidade  de elementos da sequencia de Fibonacci que serao mostrados: ");
    scanf("%i", &repeticoes);

    //Cálculo.
    for (int i = 1; i <= repeticoes; i++)
    {
        numeron = numero1 + numero2;

        printf("%i, ", numeron);

        numero1 = numero2;
        numero2 = numeron;

    }
    return 0;
}
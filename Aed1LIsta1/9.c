
#include <stdio.h>

#include <math.h>

int main()
{

    //1 Passo: Declaracao das Variaveis

    float raio, area;

    //2 Passo: Entrada de Dados

    printf("Digite o Comprimento do Raio do Circulo: ");
    scanf("%f", &raio);

    //3 Passo: Processamento

    area = 3.14 * pow(raio, 2);

    //4 Passo: Saida de Dados

    printf("A area do circulo e = %.2f\n", area);

    return 0;
}
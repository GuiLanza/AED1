#include <stdio.h>

int main()
{
    //1 Passo: declaracao das variaveis

    float salario, aumento, total;

    //2 Passo: entrada de dados

    printf("Digite o salario: ");
    scanf("%f", &salario);

    //3 Passo: processamento: aumento 10% do salario

    aumento = 0.10 * salario;
    total = aumento + salario;

    //4 Passo: Saida de dados

    printf("O aumento e = %.2f\n", aumento);
    printf("O salario com o aumento e = %.3f\n", total);

    return 0;
}

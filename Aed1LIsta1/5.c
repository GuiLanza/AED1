
#include <stdio.h>

int main()
{
    //1 Passo: declaracao das variaveis

    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    //2 Passo: entrada de dados

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite o peso da terceira nota: ");
    scanf("%f", &peso3);

    //3 Passo: Processamento

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/(peso1 + peso2 + peso3);

    //4 Passo: Saida de Dados

    printf("Sua Media das notas com os respectivos pesos e = %f", media);

    return 0;

}

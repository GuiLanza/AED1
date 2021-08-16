#include<stdio.h>

int main()
{
    //1 Passo: declaracao das Variaveis

    float pacote, gato, racaorestante;

    //2 Passo: Entrada de Dados

    printf("Digite a pesagem do pacote de racao (quilogramas) : ");
    scanf("%f", &pacote);

    printf("Digite a pesagem de racao que o gato consome por dia: ");
    scanf("%f", &gato);

    //3 Passo: Processamento

    racaorestante = (pacote * 1000) - ((gato * 2)*5);

    //4 Passo: Saida de Dados

    printf("A quantidade de racao que sobrara depois do consumo de 5 dia dos 2 gatos  (GRAMAS) e = %.1f\n", racaorestante);

    return 0;
}
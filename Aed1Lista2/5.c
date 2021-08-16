
#include<stdio.h>

int main()
{
    //1 Passo:Declaracao das variaveis

    float numero1, numero2, numero3, calculo;

    //2 Passo: Entrada de Dados

    printf("Digite o Primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o Segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite 1 se quiser a MEDIA dos Numeros: \n");

    printf("Digite 2 se quiser a SUBTRACAO dos Numeros: \n");

    printf("Digite 3 se quiser a MULTIPLICACAO dos Numeros: \n");

    printf("Digite 4 se quiser a DIVISAO dos Numeros: ");

    scanf("%f", &numero3);

    //3 e 4 Passo: Processamento/Saida de Dados

    if(numero3 == 1){

        calculo =   (numero1 + numero2) /2;

        printf("A Media dos Numeros e = %.2f\n", calculo);

    }else if (numero3 == 2){
        if(numero1 < numero2){

            calculo = numero2 - numero1;
        } else{
        calculo = numero1 - numero2;
        }
        printf("A Subtracao dos numeros e = %.2f\n", calculo);

    } else if (numero3 == 3){

        calculo = numero1 * numero2;

        printf("A Multiplicacao dos numeros e = %.2f\n", calculo);
    } else if(numero3 == 4){

        calculo = numero1 / numero2;

        printf("A Divisao dos numeros e = %.2f\n", calculo);
    } else {

        printf("ERRO (NAO EXISTE ESSA ALTERNATIVA)");
    }

    return 0;
}
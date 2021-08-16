#include<stdio.h>

int main()

{
    //1 Passo: Declaracao das Variaveis

   int faixa1, faixa2, faixa3, faixa4, faixa5;

   float faixa1p, faixa5p;

   int idade;

   int i;

    faixa1 = faixa2 = faixa3 = faixa4 = faixa5 = 0;

    for(i = 0; i < 8; i++){

        printf("Digite a Idade %i: ", i + 1);
        scanf("%i", &idade);

       if(idade <= 15){

        faixa1++;

       }else if(idade >= 16 && idade <=30){

        faixa2++;

       }else if(idade >= 31 && idade <= 45){

        faixa3++;

       }else if(idade >= 46 && idade <= 60){

        faixa4++;

       }else{

        faixa5++;

       }

    }

    faixa1p = (100 * faixa1) / 8;

    faixa5p = (100 * faixa5) / 8;

   printf("Pessoas com ate 15 anos: %i pessoas\n", faixa1);

   printf("Pessoas de 16 a 30 anos: %i pessoas\n", faixa2);

   printf("Pessoas de 31 a 45 anos: %i pessoas\n", faixa3);

   printf("Pessoas de 46 a 60 anos: %i pessoas\n", faixa4);

   printf("Pessoas acima de 60 anos: %i pessoas\n", faixa5);

   printf("Porcentagem de pessoas com  menor de 15 anos: %.2f\n", faixa1p);

   printf("Porcentagem de pessoas com maior de 60 anos: %.2f\n", faixa5p);

   return 0;

}
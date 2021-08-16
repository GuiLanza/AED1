#include<stdio.h>

int main()

{
    //1 Passo: Declaracao das Variaveis

    int idade50 = 0, pesop = 0, alturam = 0;
    int idade;
    int i;

    float alturat, peso, altura;


    for(i = 0; i < 5; i++){

        printf("Digite a Idade %i: ", i + 1);
        scanf("%i", &idade);

        printf("Digite a Altura(metros) %i: ", i + 1);
        scanf("%f", &altura);

        printf("Digite o Peso %i: ", i + 1);
        scanf("%f", &peso);

       if(idade >= 50){

        idade50++;

       }else if(idade >= 10 && idade <=20){

        alturat += altura;

        alturam++;

       }

       if(peso <= 40){

        pesop++;

       }else{


       }

    }

    printf("A quantidade de pessoas com maior de 50 anos e = %i\n", idade50);
    printf("A altura media das pessoas entre 10 e 20 anos e = %.2f\n", alturat/alturam);
    printf("A porcentagem de pessoas com menos de 40kg e = %.i%%\n", pesop * 100 /5);

   return 0;
}
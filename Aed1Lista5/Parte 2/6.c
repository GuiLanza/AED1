#include<stdio.h>
#include<math.h>

void pesoideal(int s, float alt){

    float pesoideal = 0;

    if(s == 1){

        pesoideal = (72.7 *alt) - 58;

    }else{

        pesoideal = (62.1 *alt) - 44.7; 
    }
    printf("O peso ideal para a altura %.2f e = %.2f", alt, pesoideal);
}
int main(){

    int sexo;
    float altura = 0;

    printf("Digite 1 para Masculino: \n");
    printf("Digite 2 para Feminino: ");
    scanf("%i", &sexo);

    if(sexo == 1 || sexo == 2){

    printf("Digite a altura ");
    scanf("%f", &altura);

    }else{

        printf("ERRO:OPCAO INVALIDA: ");

        return 0;
    }

    pesoideal(sexo,altura);


}
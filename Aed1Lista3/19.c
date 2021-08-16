#include <stdio.h>

int main(){

 char letra;
 int quantidades, quantidadei;
 float compra, venda, lucro, lucrot;


 quantidades = 0;
 quantidadei = 0;

    while(letra != 'F' || letra != 'f'){

        printf("Digite uma letra para representar a acao: ");
        scanf(" %c", &letra);

        printf("Digite o preco de compra da  acao: ");
        scanf("%f", &compra);

        printf("Digite o preco de venda da acao: ");
        scanf("%f", &venda);

        lucro = venda - compra;

        printf("O lucro/prejuizo desta acao foi de: %.2f\n", lucro);

        if(lucro > 1000){

            quantidades++;
        }else{

            quantidadei++;
        }

        lucrot = lucrot + lucro;

    }
    printf("A quantidade de acoes com lucro superior a 1000 reais e = %i\n", quantidades);
    printf("A quantidade de acoes com lucro ou prejuizo inferior a 200 reais e = %i\n", quantidadei);
    printf("O lucro/prejuizo total foi = %.2f", lucrot);

    return 0;
}
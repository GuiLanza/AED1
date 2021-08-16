#include<stdio.h>

int main(void){
    int l1 = 0, l2 = 0, l3 = 0, l4 = 0;  
    float precoc, precov, lucro, lucrop;

    for(int i = 1 ; i > 0;){

        printf("Digite o codigo da mercadoria: ");
        scanf("%i", &i);

        printf("Digite o preco de compra da mercadoria: ");
        scanf("%f", &precoc);

        printf("Digite o preco de venda da mercadoria: ");
        scanf("%f", &precov);

        lucro = precov - precoc;

        lucrop = ((lucro *100 )/precoc);

        if(lucrop < 10){

            l1++;
        }else if(lucrop <= 10){

            l2++;
        }else if(lucrop <= 20){

            l3++;
        }else{

            l4++;
        }
    }


    printf("A quantidade de mercadorias que teve o lucro menor que 10%% e = %i\n", l1);
    printf("A quantidade de mercadorias que teve o lucro menor ou igual a 10%% e = %i\n", l2);
    printf("A quantidade de mercadorias que teve o lucro menor ou igual 20%% e = %i\n", l3);
    printf("A quantidade de mercadorias com o lucro maior que 20%% e = %i\n", l4);

    return 0;
}
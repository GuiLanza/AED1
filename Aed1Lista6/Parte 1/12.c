#include<stdio.h>
#include<math.h>

int potencia(int valor1, int valor2){


    int resultado = 1;

    for (int i = 0; i < valor2; i++){

        resultado *= valor1;
    }
    
    return resultado;
}
int main(){

    int v1;
    int v2;

    printf("Digite o valor do numero: ");
    scanf("%i", &v1);

    printf("Digite o valor do expoente: ");
    scanf("%i", &v2);

   printf("O valor da conta e = %i\n", potencia(v1, v2));


    return 0;
}
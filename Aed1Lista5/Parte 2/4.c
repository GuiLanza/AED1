#include<stdio.h>
#include<math.h>

void calculo(int r){

    int volume;

    volume = ((4/3) * pow(r, 3));

    printf("O valor do Volume da esfera e = %i", volume);
}

int main(){

    int raio;

    printf("Digite o valor do Raio da esfera: ");
    scanf("%i", &raio);

    calculo(raio);

    return 0;
}
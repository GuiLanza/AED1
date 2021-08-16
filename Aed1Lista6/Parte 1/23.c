#include <stdio.h>

int verif(int l1, int l2, int l3){

    if (l1 > l2 + l3 || l2 > l1 + l3 || l3 > l1 + l2){

        printf("Estes valores nao configuram medidas que consiga formar um traingulo.");

    }else{

        printf("Estes valores configuram um triangulo.");
    }
}

int tipo(int l1, int l2, int l3){

    if (l1 == l2 && l1 == l3 && l2 == l3){

        printf("Este triangulo e equilatero");

    }else if (l1 != l2 && l1 != l3 && l2 != l3){

        printf("Este triangulo e escaleno");

    }else{

        printf("Este triangulo e isoceles");

    }
}

int main(){


    int lado1 = 1;
    int lado2 = 1;
    int lado3 = 1;

    printf("Digite o comprimento do lado 1 do triangulo: ");
    scanf("%i", &lado1);

    printf("Digite o comprimento do lado 2  do triangulo: ");
    scanf("%i", &lado2);

    printf("Digite o comprimento do lado 3 do triangulo: ");
    scanf("%i", &lado3);

    for (int i = 1; lado1 < 1 || lado2 < 1 || lado3 < 1; i++){

        printf("ERRO VALOR INVALIDO (apenas valores maiores que 1 serão aceitos.\n");
    }

    verif(lado1, lado2, lado3);

    tipo(lado1, lado2, lado3);

    return 0;
}

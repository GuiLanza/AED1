#include<stdio.h>
#include<math.h>

int main(void){

    int numero1, numero2;
    float resultado;
    char retorno;

    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    resultado = numero1/numero2;

    printf("O resultado e = %.2f \n", resultado);

    printf("Gostaria de fazer outro calculo(digite S ou N): ");
    scanf(" %c", &retorno);

    while(retorno == 'S' || retorno == 's'){

        printf("Digite o primeiro numero: ");
        scanf("%i", &numero1);

        printf("Digite o segundo numero: ");
        scanf("%i", &numero2);

        resultado = numero1/numero2;

        printf("O resultado e = %.2f \n", resultado);

        printf("Gostaria de fazer outro calculo(digite S ou N): ");
        scanf(" %c", &retorno);

    }

    return 0;
}

#include<stdio.h>
#include<math.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    float numero1, numero2, calculo, raiz1, raiz2;
    char opcao;

    //2 Passo: Entrada de Dados

    printf("Digite o Primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o Segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite A se quiser o Primeiro numero ELEVADO ao Segundo: \n");

    printf("Digite B se quiser a RAIZ QUADRADA de cada um dos numeros: \n");

    printf("Digite C se quiser a RAIZ CUBUCA de cada um dos numeros: ");
    scanf(" %c", &opcao);

    //3 e 4 Passo: Processamento/Saida de Dados

    if(opcao == 'a'){

        calculo = pow(numero1, numero2);

        printf("O Resultado do Primeiro numero elevado ao Segundo numero e = %.2f\n", calculo);

    }else if(opcao == 'b'){

        raiz1 = sqrt(numero1);
        raiz2 = sqrt(numero2);

        printf("A raiz quadrada do Primeiro numero e = %.2f\n", raiz1);
        printf("A raiz quadrada do Segundo numero e = %.2f\n", raiz2);
    }else if(opcao == 'c'){

        raiz1 = cbrt(numero1);
        raiz2 = cbrt(numero2);

        printf("a raiz cubica do Primeiro numero e = %.2f\n", raiz1);
        printf("A raiz cubica do Segundo numero e = %.2f\n", raiz2);
    }else{

        printf("ERRO (NAO EXISTE ESSA ALTERNATIVA)");
    }

    return 0;
}
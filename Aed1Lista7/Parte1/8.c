#include <stdio.h>

int funcao(int n)
{
    if (n == 1){

        return 1;

    }else if (n == 2){

        return 2;
    }else{


        if (n % 2 != 0){

            return (2 * funcao(n - 1)) + (3 * funcao(n - 2));
        }
    }
}

int main()
{
  
    int n, resposta;

    printf("Digite um numero:");
    scanf("%d", &n);

    resposta = funcao(n);

    printf("%d", resposta);

    return 0;
}

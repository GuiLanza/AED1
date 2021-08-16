#include<stdio.h>
#include<math.h>

void media
 (int n)
{
    int soma = 0, vezes = 0;
    while (n != 0)
    {
        if(n == 0)
        {
            break;
        }
        
        printf("Digite um numero inteiro positivo (0 Para finalizar o programa).\n");
        scanf("%i", &n);
        
        soma += n;
        vezes ++;
        

    }
    printf("Média = %d", soma / vezes);
}

int main(void)
{

    int n = 1;

    media
    (n);

    return 0;
}
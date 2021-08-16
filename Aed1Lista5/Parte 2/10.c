#include <stdio.h>

voidsoma(float ni, float n2)
{
    float total;

    for (ni = 1; ni <= n2; ni++){

        total += (1 / ni);
        
    }

    printf("A soma das sequencias  dos numeros da sequencia S ate o ponto %.2f e =%.2f ", n2, total);
}

int main()
{
    float i = 1;
    float x;

    printf("Digite o valor para que sejam somados os numeros da sequencia: \n");
    scanf("%f", &x);

    soma(i, x);

    return 0;
}
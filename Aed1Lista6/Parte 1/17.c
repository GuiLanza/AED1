#include<stdio.h>
#include<math.h>

int mdc(int n1, int n2){

    int resto;

    
    do {

        resto = n1 % n2;

        n1 = n2;
        n2 = resto;

    } while (resto != 0);

    return n1;

}
int main(){

    int num1, num2;
    
    printf("Digite o valor do Primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o valor do Segundo numero: ");
    scanf("%i", &num2);

    printf("O mdc De %i e %i e = %i", num1, num2, mdc(num2,num1));

    return 0;
}
#include<stdio.h>

int adicao(int num){

    int soma = 0;

  while(num > 0){

    soma += num%10;
    num/=10;
  }

    return soma;
}
int main(void){

  int numero, resultado;

  printf("Digite um numero: ");
  scanf("%d",&numero);

    adicao(numero);


  printf("%d\n", adicao(numero));

  return 0;
}
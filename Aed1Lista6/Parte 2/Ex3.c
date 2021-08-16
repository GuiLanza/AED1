#include <stdio.h>

void progressaop(int *n, int *y, int *rz, int *tt, int *i){

  for(*i = 0; *i <= *y; *i++){

    *n *= *rz;
    *tt += *n;
  }

 printf("O numero %i desta sequencia e = %i \n", *y, (*n/5));
 printf("A soma dos termos entre o primeiro e o termo %i e de: %i \n", *y, (*tt - *n));

 return;
}

int main(void){

  int numero;
  int termo;
  int razao;
  int total;
  int ind;
  
  printf("Digite um numero para que seja o primeiro termo da progressao: ");
  scanf("%d", &numero);  
  
   printf("Digite o a posicao do termo a ser mostrado: ");
  scanf("%d", &termo);  
  
   printf("Digite a razao desta progressao: ");
  scanf("%d", &razao);  
     
  printf("O primeiro numero da progressao foi: %d \n",numero);  

 progressaop(&numero, &termo, &razao, &total, &ind);  
  
  return 0;
}

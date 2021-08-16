#include <stdio.h>

void progressaop(int *x, int *y, int *z, int *t, int *i){

  for(*i = 0; *i <= *y; *i++){

    *x *= *z;
    *t += *x;
 }

 printf("O numero %i desta sequencia foi: %i \n", *y, (*x/5));
 printf("A soma dos termos entre o primeiro e o termo %i e de: %i \n", *y, (*t - *x));

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

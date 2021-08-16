#include <stdio.h>

void progressao(int x, int y, int z, int i){

 for(i = 0; i < y; i++) {
    x += z;
 }
 printf("O numero %i  desta sequencia e= %i \n",i, x-z);
 return;
}
void progressaop(int *x, int *y, int *z, int *i){
  for(*i = 0; *i < *y; *i++) {
    *x += *z;
 }
 return;
}

int main(void){
  int numero;
  int termo;
  int razao;
  int ind;
  
  printf("Digite um numero para que seja o primeiro termo da progressão: ");
  scanf("%d", &numero);  
  
   printf("Digite o a posicao do termo a ser mostrado: ");
  scanf("%d", &termo);  
  
   printf("Digite a razao desta progressao: ");
  scanf("%d", &razao);  
     
  printf("O primeiro numero da progressao e = %d \n",numero);  
  
  progressao(numero, razao, termo, ind); 

 progressaop(&numero, &razao, &termo, &ind);  
  
  return 0;
}

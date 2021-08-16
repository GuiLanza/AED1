#include<stdio.h>
#include<math.h>

void fatorial(int n){

int fat, x2;

    x2 =n;

    for(fat = 1; n > 1; n = n - 1){

        fat = fat * n;
    }

    printf("O resultado do fatorial de %i e = %i", x2,fat);

}
int main(){

    int x;

    printf("Digite um numero: ");
    scanf("%i", &x);

    if (x >0 ){

        fatorial(x);
        
    }

    return 0;
}
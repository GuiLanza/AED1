#include<stdio.h>

int main(){

    int senha;

    for(int i = 1;i > 0;){

        printf("Digite a senha: ");
        scanf("%i", &senha);
        if(senha == 1234){

            printf("Acesso permitido: ");

            break;
        }else{

            printf("Senha Invalida: \n");
        }
    }

    return 0;
}
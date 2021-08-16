
#include<stdio.h>

int main()
{
    //1 Passo: Declaracao das Variaveis

    float senha;

    //2 Passo:Entrada de Dados

    printf("Digite a Senha: ");
    scanf("%f", &senha);

    //3 e 4 Passo:Processamento/Saida de Dados

    if(senha == 4531){

        printf("Senha Correta acesso permitido");
    }else {

        printf("Senha Incorreta acesso negado");
    }
    return 0;
}
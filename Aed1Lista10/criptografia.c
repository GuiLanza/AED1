#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){

    FILE *cripto;
    char cont[100];

    cripto = fopen("crip.txt", "w");

    if (cripto == NULL){

        printf("ERRO:(O arquivo nao pode ser aberto)\n");
    }
    else{

        printf("Arquivo aberto com sucesso.\n");
    }

    printf("Insira a sequencia de caracteres a ser criptografada pelo programa(com maximo de 100 caracteres):\n");
    fgets(cont, sizeof(cont), stdin);

    for(int i = 0; i < strlen(cont); i++){

        cont[i] = cont[i] + 1;
    }

    fprintf(cripto, "%s", cont);

    printf("cont cripto com sucesso.\n");

    system("pause");

    return(0);
}
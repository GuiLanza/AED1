#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){

    FILE *crip;
    FILE *descrip;
    char cont[100];

    crip = fopen("crip.txt", "r");

    descrip = fopen("descrip.txt", "w");

    if (crip == NULL){

        printf("ERRO(Execute primeiro o programa criptografia.c)\n");

    }else{

        printf("Arquivo aberto com sucesso\n");
    }

    if (descrip == NULL){

        printf("ERRO(O arquivo nao pode ser aberto)\n");

    }else{

        printf("Arquivo criado com sucesso\n");
    }
    

    for (int i = 0; i < strlen(cont); i++){

        cont[i] = cont[i] - 1;
    }

    printf("O conteduo foi descriptografado com sucesso.\n");
    fprintf(descrip, "%s", cont);

    system("pause");
    return (0);
}
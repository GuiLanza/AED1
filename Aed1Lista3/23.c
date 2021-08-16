#include<stdio.h>

int main(){


    int  opcao;
    float meses, salario, nsalario, feriasv, decimoterceiro;

    while(opcao != 4){

        printf("Digite 1 para Nova Salario: \n");
        printf("Digite 2 para Ferias: \n");
        printf("Digite 3 para Decimo Terceiro: \n");
        printf("Digite 4 para Sair: ");
        scanf("%i", &opcao);

        if(opcao == 1){

            printf("Digite o Salario do empregado: ");
            scanf("%f", &salario);

            if(salario < 210){

                nsalario = salario + (salario * 0.15);
            }else if(salario >= 210 && salario <= 600){

                nsalario = salario + (salario * 0.10);
            }else{

                nsalario = salario + (salario * 0.5);
            }

            printf("O Novo Salario e = %.2f\n", nsalario);

        }else if(opcao == 2){

            printf("Digite o salario do empregado: ");
            scanf("%f", &salario);

            feriasv = salario + (salario/3);

            printf("O valor de ferias do empregado e = %.2f\n", feriasv);

        }else if(opcao == 3){

            printf("Digite o salario do empregado: ");
            scanf("%f", &salario);

            printf("Digite o numero de meses de trabalho: ");
            scanf("%f", &meses);

            if(meses <= 12){

                decimoterceiro = ((salario * meses) /12);

                printf("O valor do Decimo Terceiro e = %.2f\n", decimoterceiro);
            }else if (meses > 12){

                printf("ERRO(SO PODE COLOCAR ATE 12 MESES)\n");
            }
        }else if (opcao != 4){

            printf("ERRO(NAO EXISTE ESSA OPCAO)");
        }
    }

    return 0;
}
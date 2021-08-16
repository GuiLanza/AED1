#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void soma(){

    int numeros;
    float numero, total;

    printf("Digite quantos numeros quer Somar: ");
    scanf("%i", &numeros);
            
    for(int i = 1;i <= numeros;i++){

    printf("Digite um numero: ");
    scanf("%f", &numero);

    total += numero;
                

    }
    printf("A soma de todos os numeros digitados e = %.2f\n", total);

    system("pause");
}
void subtracao(){

    int numeros;
    float numero, total;

    printf("Digite quantos numeros quer Subtrair: ");
    scanf("%i", &numeros);

     numeros -= 1;

    printf("Digite o numero 1: ");
    scanf("%f", &total);

    for(int i2 = 0;i2 < numeros; i2++){

        printf("Digite o numero %i: ", i2+2);
        scanf("%f", &numero);

        total -=numero;
    }
    printf("A subtracao de todos os numeros digitados e = %.2f\n", total);

    system("pause");

}
void multiplicacao(){
    
    int numeros;
    float numero, total;
    
    printf("Digite quantos numeros quer Multiplicar: ");
    scanf("%i", &numeros);

     total = 1;

    for(int i3 = 1;i3 <= numeros;i3++){

        printf("Digite o numero %i: ", i3);
        scanf("%f", &numero);

        total *= numero;
    }
    printf("A Multiplicacao de todos os numeros digitados e = %.2f\n", total);

    system("pause");
}
void divisao(){

    int numeros;
    float numero, total;

    printf("Digite quantos numeros quer Dividir: ");
    scanf("%i", &numeros);

    printf("Digite o numero 1: ");
    scanf("%f", &total);
            
     numeros -=1;

    for(int i4 =0;i4 < numeros; i4++){

        printf("Digite o numero %i: ", i4+2);
        scanf("%f", &numero);

        total /= numero;
    }
    printf("A divisao de todos os numeros digitados e = %.2f\n", total);

    system("pause");
}
void raizq(){

    float numero, total;

    printf("Digite o numero que deseja descobrir a raiz quadrada: ");
    scanf("%i", &numero);

    total = sqrt(numero);

    printf("A raiz quadrada do numero e = %.2f\n", total);

    system("pause");
}
void potencia(){

    int numeros;
    float numero, total;

    printf("Digite o numero que quer potencializar: ");
    scanf("%i", &numeros);
            
    printf("Digite por quanto quer potencializar: ");
    scanf("%f", &numero);

    total = pow((numeros), numero);

    printf("O resultado da Potencia e = %.2f\n", total);

    system("pause");
}
void seno(){

    float numero, total;

    printf("Digite o grau para calcular o Seno: ");
    scanf("%f", &numero);

    total = sin(numero);

    printf("O Seno de %f graus e = %.2f\n",numero, total);

    system("pause");
}
void cosseno(){

    float numero, total;

    printf("Digite o grau para calcular o Cosseno: ");
    scanf("%f", &numero);

    total = cos(numero);

    printf("O Cosseno de %f graus e = %.2f\n",numero, total);

    system("pause");

}
void hipotenusa(){

    float cateto1, cateto2, hip;

    printf("Digite o valor de um dos Catetos: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do outro cateto: ");
    scanf("%f", &cateto2);

    hip= sqrt((cateto1 * cateto1)+(cateto2 * cateto2));

    printf("o Valor da Hipotenusa e = %.2f\n", hip);

    system("pause");

}
void tangente(){

    float numero, total;

    printf("Digite o grau para calcular o Tangente: ");
    scanf("%f", &numero);

    total = tan(numero);

    printf("A Tangente de %f graus e = %.2f\n",numero, total);

    system("pause");

}
void logaritmo(){

    float numero, base, total;

    printf("Digite a Base do Logaritmo: ");
    scanf("%f", &base);

    printf("Digite um numero pra saber o logaritmo: ");
    scanf("%f", &numero);

    total = log(numero), base;

    printf("O valor do Logaritmo %f da base %f = %.2f\n", numero, base, total);

    system("pause");

}
void arear(){

    float base, altura, total;

    printf("Digite o valor da Base do Retangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da Altura do Retangulo: ");
    scanf("%f", &altura);

    total = base * altura;

    printf("O valor da base do Retangulo e = %.2f\n", total);

    system("pause");
}
void areac(){

    float raio, total;

    printf("Digite o raio da Circunferencia: ");
    scanf("%f", &raio);

    total = (3.14 *(raio * raio));

    printf("A area da Circunferencia e = %.2f\n", total);

    system("pause");

}
void fatorial(){

    int fat, numero;

    printf("Insira um valor para calcular seu fatorial: ");
    scanf("%i", &numero);
 
    for(fat = 1; numero > 1; numero = numero - 1){

    fat = fat * numero;
    }
    printf("Fatorial calculado: %i\n", fat);

    system("pause");
}
int main(){


    int opcao = 1;
 

    while(opcao != 0){


        printf("Digite 1 para calcular uma Soma: \n");
        printf("Digite 2 para calcular uma Subtracao: \n");
        printf("Digite 3 para calcular uma Multiplicacao: \n");
        printf("Digite 4 para calcular uma Divisao: \n");
        printf("Digite 5 para calculat uma Raiz Quadrada: \n");
        printf("Digite 6 para calcular uma Potencia: \n");
        printf("Digite 7 para calcular um Seno \n");
        printf("Digite 8 para calcular um Cosseno: \n");
        printf("Digite 9 para calcular uma Hipotenusa de um Triangulo Retangulo: \n");
        printf("Digite 10 para calculat uma Tangente: \n");
        printf("Digite 11 para calcular um Logaritmo: \n");
        printf("Digite 12 para calcular uma Area de um Triangulo: \n");
        printf("Digite 13 para calcular uma Area de uma Circunferencia: \n");
        printf("Digite 14 para calcular um Fatorial: \n");
        printf("Digite 0 para sair: ");
        scanf("%i", &opcao);

        if(opcao > 14 || opcao < 0){

            printf("ERRO(OPCAO INVALIDA)\n");

            system("pause");

        }

        switch(opcao){

            case 1:

            soma();

            break;

            case 2: 

            subtracao();

            break;

            case 3: 

            multiplicacao();

            break;

            case 4:

            divisao();

            break;

            case 5:

            raizq();

            break;

            case 6:

            potencia();

            break;

            case 7: 

            seno();

            break;

            case 8:

            cosseno();

            break;

            case 9:

            hipotenusa();

            break;

            case 10:
            
            tangente();

            break;

            case 11:

            logaritmo();
            
            break;

            case 12:

            arear();

            break;

            case 13:

            areac();

            break; 

            case 14:

            fatorial();

            break;  
        }
    }

    return 0;
}
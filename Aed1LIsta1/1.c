#include<stdio.h>


int main()
{
	//1 Passo: Declaracao das variaveis

	float x, y, z, soma, media;

	//2 Passo: Entrada de dados

	printf("Digite o primeiro Numero: ");
	scanf("%f",&x);

	printf("Digite o segundo Numero: ");
	scanf("%f",&y);

	printf("Digite o terceiro Numero: ");
	scanf("%f",&z);

	//3 Passo: Processamento

	soma = (x + y + z);
	media = soma / 3;

	//4 Passo: Saida de dados

	printf("A soma dos Numeros e = %.1f\n",soma);
	printf("Media dos Numeros e = %.2f\n",media);


	return 0;
}
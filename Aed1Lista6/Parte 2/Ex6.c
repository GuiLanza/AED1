#include <stdio.h>

void cm(float *p, float *c){
    *c = *p / 2.54;
}

void cel(float *f, float *t){
    *t = (*f - 32) / 1.8;
}

void pol(float *c, float *p){
    *p = *c * 2.54;
}

void far(float *t, float *f){
    *f = (*t * 1.8) - 32;
}

int main(){
    int opt;
    float c;
    float t;
    float p;
    float f;

    printf("Escolha uma opção: \n ");
    printf("1: polegada para centimetro\n");
    printf("2: celsius para farenheit \n");
    printf("3: centimetros para polegadas\n");
    printf("4: farenheit para celsius ");
    scanf("%i", &opt);

    switch (opt){
    case 1:
        printf("Digite o valor do comprimento em polegadas:");
        scanf("%f", &p);
        cm(&p, &c);

        printf("O valor do comprimento em centimetros e: %f ", c);

        break;

    case 2:
        scanf("Digite o valor da temperatura em celsius:");
        scanf("%f", &t);
        cel(&t, &f);

        printf("O valor da temperatura em farenheit e: %f ", f);

        break;

    case 3:
        printf("Digite o valor do comprimento em centimetros:");
        scanf("%f", &c);
        pol(&c, &p);

        printf("O valor do comprimento em polegadas e: %f ", p);

        break;

    case 4:
        scanf("Digite o valor da temperatura em farenheit:");
        scanf("%f", &f);
        far(&f, &t);

        printf("O valor da temperatura em celsius e: %f ", t);

        break;
    }

    return 0;
}

#include <stdio.h>

int data(int f, int ft, int s, int st, int sm, int sp, int i){
    ft = 0;
    st = 0;
    sm = 0;
    sp = 0;
    i = 1;

    printf("%i\n", f);
    printf("%i\n", ft);
    printf("%i\n", s);
    printf("%i\n", st);
    printf("%i\n", sm);
    printf("%i\n", sp);
    printf("%i\n", i);

    for (i = 1; s != 0 && f != 0; i++){
        printf("Digite o valor do salario do %iº habitate: ", i);
        scanf("%i", &s);

        printf("Digite o numero de filhos do %iº habitate: ", i);
        scanf("%i", &f);

        ft += f;
        st += s;

        if (s > sm){

            sm = s;

        }if (s < 380){

            sp++;
        }
    }
    printf("O salario medio desta população é de: %i ", st / i);
    printf("O numero medio de filhos por familia desta população é de: %i ", ft / i);
    printf("O maior salario entre os habitantes analisados foi de: %i ", sm);
    printf("A porcetnagem de  habitantes com o salario inferior a 380$ foi de: %i%", ((sp * 100) / i));
}

int main(){

    int f = 1;
    int ft = 0;
    int s = 1;
    int st = 0;
    int sm = 0;
    int sp = 0;
    int i = 1;

    data(f, ft, s, st, sm, sp, i);

    return 0;
}

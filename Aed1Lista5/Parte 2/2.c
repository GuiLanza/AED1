#include<stdio.h>

void tempo(int h, int m, int s, int ttl){

 h = ((h *60)*60);
 m = (m*60);
 ttl = h + m + s;

    printf("A quantidade de tempo total em segundos e = %i", ttl);
}
int main(){

    int horas, min, seg, total;

    printf("Digite a quantidade de horas: ");
    scanf("%i", &horas);
    
    printf("Digite a quantidade de Minutos: ");
    scanf("%i", &min);

    printf("Digite a quantidade de Segundos: ");
    scanf("%i", &seg);

    tempo(horas, min, seg, total);

    return 0;
}
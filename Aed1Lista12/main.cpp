#include<cstdlib>
#include<iostream>
#include<ctime>
#include"vetor.h"

using namespace std;

int testaTamanhoVetor (Vetor *v){

    return v ->getTamanhoVetor();
}

int main (int argc, char *argv[]){

    Vetor *v = new Vetor(); 

    
    v->insereNoFinal(10);
    v->insereNoFinal(8);
    v->insereNoFinal(16);
    v->insereNoFinal(7); 
    v->insereNoFinal(5);
    v->insereNoFinal(25);
    v->insereNoFinal(21);
    v->insereNoFinal(22);
    v->insereNoFinal(15); 
    v->insereNoFinal(18);
    v->insereNoFinal(11);
 
    v->imprime();

    int pos = v->posicaoDe(15);

    if(pos != -1){

        cout << "\n Posicao: " << pos;

    }else{

        cout << "\nElemento nao encontrado:\n";

    }

    v->alteraEm(3,999);
    v->alteraEm(0,999);
    v->alteraEm(9,999);

    v->imprime();

    cout << "\n";

    v->alteraEm(3,111);

    v->imprime();

    cout << "\n";

 
    for (int i = 0; i < v->obtemTamanho(); i++){

        cout << "\nElemento na posicao " <<i+1 <<": " <<v->elementoEm(i); 
    }

    v->imprime();

    cout << "\n";

    v->reverte();

    v->imprime();

}
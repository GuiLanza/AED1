#include "vetor.h"
#include<iostream>

using namespace std;

Vetor::Vetor(){ 

    v = new int [TAMANHO]; 
    for(int i = 0; i< TAMANHO; i++){

        v[i]=0;

    }
    numElementos = 0;

}

int Vetor::obtemTamanho(){ 

    return numElementos;
    
}
void Vetor::insereNoFinal(int novoElemento){ 


    if (numElementos < TAMANHO){

        v[numElementos] = novoElemento;
        numElementos++;

    }else{

        cout << "\nVetor cheio!\n";
    }

     
}
int Vetor::posicaoDe (int elemento){ 
    
    for(int i = 0;i < numElementos;i++){
        if(elemento == v[i]){

            return i;
        }
    }
    return -1;
}
void Vetor::alteraEm (int pos, int novoValor){ 

    if((pos >= 0) && (pos < numElementos)){

        v[pos] = novoValor;

    }else{
        cout << "\nPosição Invalida!\n";
    }
}
int Vetor::elementoDe (int pos){
    
    if(v[0]!= 0){

        pos = v[0];

        return pos;

    }else{

        return -1;
    }


}
int Vetor::elementoEm (int pos){ 

   if(pos >= 0){

       return v[pos];

   }else{

       return -1;
   }

}
void Vetor::reverte(){ 

    int *temp = new int [numElementos];
    int j = 0;
    for (int i = (numElementos - 1); i >= 0; i--){

        temp[j++] = v[i];

    }

    for (int i = 0; i < numElementos; i++){
        
        v[i] = temp[i];
    }

    delete temp;

}
void Vetor::imprime(){
    for(int i =0; i < numElementos; i++){

        cout << v[i]<< " ";
    }

}
int Vetor::remove(int elemento){

   v[elemento] = 0;
   return v[elemento];
}
void Vetor::dobraVetor(){

    for(int i=0; i < numElementos;i++){

        v[i] *= 2;
    }
    
}
int Vetor::getTamanhoVetor(){

    return numElementos;
}

#include <iostream>
using namespace std;
#define size 3

void Inversao(int *vetor){
    int vetor2[size];
    for(int i = 0; i<size; i++){
        vetor2[i] = *vetor;
        vetor++;
    }
    for(int i = 0; i<size; i++){
        vetor--;
        *vetor = vetor2[i];
    }
}

void EscrevaVetor(int vetor[size]){
    for(int i = 0; i<size; i++){
        cout << "Numero[" << i+1 << "]: " << vetor[i] << endl;
    }
}

int main(){
    int vetor[size]={1, 2, 3};
    int *vP = vetor;

    EscrevaVetor(vetor);
    Inversao(vP);
    EscrevaVetor(vetor);

    
    return 0;
}
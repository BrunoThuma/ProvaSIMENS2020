#include <iostream>
#include <string>
using namespace std;

int mySearch(int vector[], int vecSize, int key){
    for(int i = 0; i < vecSize; i++){
        if (vector[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int vect1[] = {1,2,3,4,5,6};

    cout << "Exemplo1 de uso da funcao mySearch \n" 
        <<"Vetor usado: [1,2,3,4,5,6]\n"
        <<"Tamanho do vetor: 6\n"
        <<"Chave procurada: 4\n"
        <<"Resultado esperado: 3, "
        <<"pois o valor esta na posicao 3, contando a partir de 0";
    cout << "> Resultado (contando a partir de 0): " << mySearch(vect1, 6, 4) << "\n\n";

    int vect2[] = {1,1,1,1,1,1};
    cout << "Exemplo2 de uso da funcao mySearch \n"
        <<"Vetor usado: [1,1,1,1,1,1]\n"
        <<"Tamanho do vetor: 6\n"
        <<"Chave procurada: 4\n"
        <<"Resultado esperado: -1, pois o valor nao esta na lista";
    cout << "> Resultado (contando a partir de 0): " << mySearch(vect2, 6, 4);
}
#include <iostream>
#include <string>
using namespace std;

// Implementação recursiva do algoritmo de Fibonacci
int fibo(int finish){
    if(finish == 0){
        return 0;
    }
    else if (finish == 1){
        return 1;
    }
    // Se nao for nenhum dos casos especificos
    // fazemos recursao para descobrir a posicao desejada
    return fibo(finish-1) + fibo(finish-2);
    // Nota: Recursao eh computacionalmente custoso para esse problema
    // mas C++ eh uma linguagem mt otimisada que suporta tal operacao ate
    // certo ponto
}

int main(){
    string position;

    cout << "Insira a posicao de Fibonacci ";
    // Pega input do usuario
    cin >> position;
    // Imprimimos na tela a saida da funcao fibo para o int convertido a partir
    // da string inserida pelo usuario
    cout << "Numero de Fibonacci " << fibo(stoi(position));
}
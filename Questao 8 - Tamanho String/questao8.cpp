#include <iostream>
#include <string>
using namespace std;

// Utilizamos como parametro o ponteiro da string inserida pela usuario
// para ser utilizada num for com iteracao por range
int myLength(string &inputString){
    int count = 0;

    // For com iteracao por range utilizando o ponteiro da string e um ponteiro
    // de char para cada uma das posicoes da string
    for(char &c : inputString)
        // Para cada char da string incrementamos o contador
        count++;
    return count;
}

int main(){
    string userInput;

    cout << "Digite uma string para ser medida: ";
    // Pega linha inserida pelo usuario
    getline(cin, userInput);
    cout << "Tamanho da string: " << myLength(userInput);
}
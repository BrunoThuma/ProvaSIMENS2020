#include <iostream>
#include <string>
using namespace std;

// Usar como parametro o ponteiro da string passada
// dessa forma podemos alterala sem usar segundo buffer
void invert(string &ptrString){
    // So precisamos percorrer a string ate a metade
    for(int i = 0; i < (ptrString.size()/2); i++){
        // Armazenar o char na ultima posicao em variavel temporaria
        char temp = ptrString[ptrString.size()-(i + 1)];
        // Substituir ultimo char pelo primeiro
        ptrString[ptrString.size()-(i+1)] = ptrString[i];
        // Substituir primeiro char pelo ultimo, armazenado na variavel temporaria
        ptrString[i] = temp;
    }
}

int main(){
    // Curisosidade: "subi no onibus" ao contrario fica "subi no onibus"
    string example = "SubiNoOnibus";
    string usrInput;
    cout << "Digite a string a ser invertida \n";
    getline(cin, usrInput);
    cout << "String original: " << usrInput << "\n";
    invert(usrInput);
    cout << "String invertida: " << usrInput << "\n";
}
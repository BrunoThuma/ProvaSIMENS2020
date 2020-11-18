#include <iostream>
#include <string>
using namespace std;

int myLength(string inputStringPtr){
    int count = 0;
    while(inputStringPtr != ""){
        count += 1;
        remove(inputStringPtr.begin());
    }
    return count;
}

int main(){
    string userInput;

    cout << "Digite uma string para ser medida: ";
    getline(cin, userInput);
    cout << "Tamanho da string: " << myLength(userInput);
}
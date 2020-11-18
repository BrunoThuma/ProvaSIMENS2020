#include <iostream>
#include <string>
using namespace std;

int fibo(int finish){
    if(finish == 0){
        return 0;
    }
    else if (finish == 1){
        return 1;
    }
    return fibo(finish-1) + fibo(finish-2);
}

int main(){
    string position;

    cout << "Insira a posicao de Fibonacci ";
    cin >> position;

    cout << "Numero de Fibonacci " << fibo(stoi(position));
}
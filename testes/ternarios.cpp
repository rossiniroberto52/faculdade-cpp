#include<iostream>

using namespace std;

int main(){

    int nota1, nota2, nota;
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;

    string res;
    //(expressão(teste logico)) ? valor1 : valor2
    nota = ((nota1*2)+(nota2*3))/5;
    res = (nota >= 7) ? "sim" : "não";
    cout << res;
    return 0;
}
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    string entrada;
    cin >> entrada;

    size_t ponto = entrada.find('.');
    string parte_inteira, parte_decimal;

    if (ponto != string::npos) {
        parte_inteira = entrada.substr(0, ponto);
        parte_decimal = entrada.substr(ponto + 1);
    } else {
        parte_inteira = entrada;
        parte_decimal = "00";
    }

    int reais = stoi(parte_inteira);
    int centavos = stoi(parte_decimal);
    int total_centavos = reais * 100 + centavos;

    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;
    for(int nota : notas){
        int quantidade = total_centavos / nota;
        total_centavos %= nota;
        cout << quantidade << " nota(s) de R$ " << fixed << setprecision(2) << (nota / 100.0) << endl;
    }

    cout << "MOEDAS:" << endl;
    for(int moeda : moedas){
        int quantidade = total_centavos / moeda;
        total_centavos %= moeda;
        cout << quantidade << " moeda(s) de R$ " << fixed << setprecision(2) << (moeda / 100.0) << endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int qntd, codigo;
    cin >> codigo >> qntd;
    float valor[] = {4, 4.5, 5, 2, 1.50};
    float res;
    res = valor[codigo-1] * qntd;
    printf("Total: R$ %.2f\n", res);
    return 0;
}
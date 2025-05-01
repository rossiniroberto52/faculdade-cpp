#include<iostream>
using namespace std;

int main(){
    int dias_total;
    cin >> dias_total;
    int anos = dias_total / 365;
    int dias_restantes = dias_total % 365;
    int meses = dias_restantes / 30;
    int dias = dias_restantes % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}
#include <complex>
#include<iostream>
using namespace std;

int main(){
    int kms;
    double litros, res;

    cin >> kms;
    cin >> litros;

    res = (kms/litros);
    printf("%.3f km/l\n", res);
    return 0;
}
#include <cmath>
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    int raio;
    double pi, res;
    pi = 3.14159;
    cin >> raio;

    res = ((4.0/3)*pi*pow(raio, 3));
    printf("VOLUME = %.3f\n", res);

    return 0;
}
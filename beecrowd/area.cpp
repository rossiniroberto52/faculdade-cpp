#include <cmath>
#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    double a, b, c,r_triagulo,r_circulo,r_trapezio,r_quadrado,r_retangulo,pi;
    pi = 3.14159;
    cin >> a >> b >> c;
    //a)
    r_triagulo = ((a*c)/2);
    r_circulo = pi*pow(c,2);
    r_trapezio = ((a+b)*c)/2;
    r_quadrado = pow(b, 2);
    r_retangulo = a*b;


    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", r_triagulo, r_circulo, r_trapezio, r_quadrado, r_retangulo);
    return 0;
}
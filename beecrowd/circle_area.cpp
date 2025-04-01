#include <cmath>
#include <iostream>

#include<stdio.h>

int main(){
    double raio, area;
    double pi = 3.14159;
    std::cin >> raio;
    area = pi*pow(raio, 2);
    printf("A=%.4f\n",area);

    return 0;
}
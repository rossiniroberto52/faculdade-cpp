//12km/L
//Tempo gasto: horas
//Velocidade media(km/h)
#include<iostream>
using namespace std;

int main(){
    int horas, vel;
    float calc1, res;
    cin >> horas;
    cin >> vel;
    calc1 = horas * vel;
    res = calc1/12;
    printf("%.3f \n", res); 


    return 0;
}
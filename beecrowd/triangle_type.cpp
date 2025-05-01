#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    float a1, b1, c1, a, b, c;
    cin >> a1 >> b1 >> c1;
    float nums[] = {a1, b1, c1};
    if(a1 > b1 && a1 > c1){
        a = a1;
        if(b1 > c1){
            b = b1;
            c = c1;
        }else{
            b = c1;
            c = b1;
        }
    }else if(b1 > a1 && b1 > c1){
        a = b1;
        if(a1 > c1){
            b = a1;
            c = c1;
        }else{
            b = c1;
            c = a1;
        }
    }else{
        a = c1;
        if(a1 > b1){
            b = a1;
            c = b1;
        }else{
            b = b1;
            c = a1;
        }
    }
    if(a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else{
        if(a * a == b * b + c * c){
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if(a * a > b * b + c * c){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if(a * a < b * b + c * c){
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if(a == b && a == c){
            cout << "TRIANGULO EQUILATERO" << endl;
        }else if(a == b || a == c || b == c){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
    
}
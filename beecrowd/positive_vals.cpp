#include<iostream>
using namespace std;

int main(){
    float num1, num2, num3, num4, num5, num6;
    int contagem;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
    if(num1 > 0.0 ){
        contagem+=1;
    }
    if(num2 > 0.0 ){
        contagem+=1;
    }
    if(num3 > 0.0 ){
        contagem+=1;
    }
    if(num4 > 0.0 ){
        contagem+=1;
    }
    if(num5 > 0.0 ){
        contagem+=1;
    }
    if(num6 > 0.0 ){
        contagem+=1;
    }
    cout << contagem << " valores positivos" << endl;
    return 0;
}
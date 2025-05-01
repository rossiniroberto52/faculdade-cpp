#include<iostream>
using namespace std;

int main(){
    float a, b, c;
    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a){
        float perimeter = a + b + c;
        printf("Perimetro = %.1f\n", perimeter);
    }else{
        float area = (a + b) * c / 2;
        printf("Area = %.1f\n", area);
    }

    return 0;
}
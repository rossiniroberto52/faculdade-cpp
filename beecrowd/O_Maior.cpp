#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int a, b, c, MaiorAB, MaiorABC;
    cin >> a >> b >> c;
    MaiorAB = ((a+b)+abs(a-b))/2;
    MaiorABC = ((MaiorAB+c)+abs(MaiorAB-c))/2;

    if(MaiorABC == c){
        printf("%d eh o maior\n", c);
    }else if(MaiorAB == b){
        printf("%d eh o maior\n", b);
    }else{
        printf("%d eh o maior\n", a);
    }

    return 0;
}
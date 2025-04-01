#include <cstdio>
#include<iostream>
using namespace std;

int main(){

    int a,b,c,d, res;

    cin >> a; cin >> b, cin >> c; cin >> d;

    res = ((a*b)-(c*d));
    printf("DIFERENCA = %d\n", res);
    return 0;
}
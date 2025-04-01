#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    int num, hours; double phour, res;
    cin >> num; cin >> hours; cin >> phour;

    res = (phour * hours);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,res);

    return 0;
}
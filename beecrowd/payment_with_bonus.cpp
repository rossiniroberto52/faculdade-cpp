#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome; double salary, sells, wbonus;

    cin >> nome;cin >> salary; cin >> sells;

    wbonus = ((sells*15)/100)+salary;

    printf("TOTAL = R$ %.2f\n",wbonus);

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3, n4, n5;
    int contagem = 0;

    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    if(n1%2==0){
        contagem+=1;
    }
    if(n2%2==0){
        contagem+=1;
    }
    if(n3%2==0){
        contagem+=1;
    }
    if(n4%2==0){
        contagem+=1;
    }
    if(n5%2==0){
        contagem+=1;
    }
    cout << contagem << " valores pares" << endl;

    return 0;
}
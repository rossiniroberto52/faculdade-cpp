#include<iostream>
using namespace std;
// dabdi algum erro que eu n sei qual mas é logico e não de codigo
int main(){
    float n1, n2, n3, n4, n5, n6, media;
    int contagem = 0;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    if(n1 > 0){
        contagem+=1;
    }
    if(n2 > 0){
        contagem+=1;
    }
    if(n3 > 0){
        contagem+=1;
    }
    if(n4 > 0){
        contagem+=1;
    }
    if(n5 > 0){
        contagem+=1;
    }
    if(n6 > 0){
        contagem+=1;
    }

    media = (n1 + n2 + n3 + n4 + n5 + n6) / contagem;
    cout << contagem << " valores positivos" << endl;
    cout << media << endl;

    return 0;
}
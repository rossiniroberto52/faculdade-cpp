#include<iostream>
using namespace std;

int main(){
    int n1;
    cin >> n1;
    for(int i = 1; i <= n1; i++){
        if(i % 2 != 0){
            cout << i << endl;
        }
    }

    return 0;
}
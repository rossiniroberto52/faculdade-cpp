#include<iostream>
#include<bits/stdc++.h>

using namespace std;
// currency converter
int main(){
    int choice;
    cout << "1) USD \n2) EUR \nchoice: ";
    cin >> choice;
    double amount;
    cout << "How much money to convert(BRL)? R$";
    cin >> amount;

    if(choice == 1){
        double USD = amount/5.74;
        cout << "You have: " << USD << "USD" << endl;
    }else if(choice == 2){
        double EUR = amount/6.33;
        cout << "You have: " << EUR << "EUR" << endl;
    }

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int month_input;
    cin >> month_input;
    cout << month[month_input - 1] << endl;
    return 0;
}
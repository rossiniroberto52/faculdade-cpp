#include<iostream>
#include<string>
using namespace std;

int main() {
    string type1, type2, type3;
    cin >> type1 >> type2 >> type3;

    if (type1 == "vertebrado") {
        if (type2 == "ave") {
            if (type3 == "carnivoro") {
                cout << "aguia" << endl;
            } else if (type3 == "onivoro") {
                cout << "pomba" << endl;
            }
        } else { // mamifero
            if (type3 == "herbivoro") {
                cout << "vaca" << endl;
            } else if (type3 == "onivoro") {
                cout << "homem" << endl;
            }
        }
    } else if (type1 == "invertebrado") {
        if (type2 == "inseto") {
            if (type3 == "hematofago") {
                cout << "pulga" << endl;
            } else if (type3 == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } else { // anelideo
            if (type3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else if (type3 == "onivoro") { // Correção aqui!
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
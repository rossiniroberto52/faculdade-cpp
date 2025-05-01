#include<iostream>
#include<string>
using namespace std;

int main() {
    int ddds[] = {61, 71, 11, 21, 32, 19, 27, 31};
    string city[] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", 
                    "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    
    int ddd_input;
    cin >> ddd_input;
    
    bool encontrou = false;
    
    // Percorre os índices do array (não os valores)
    for (int i = 0; i < 8; i++) {
        if (ddd_input == ddds[i]) {
            cout << city[i] << endl;
            encontrou = true;
            break;
        }
    }
    
    if (!encontrou) {
        cout << "DDD nao cadastrado" << endl;
    }
    
    return 0;
}
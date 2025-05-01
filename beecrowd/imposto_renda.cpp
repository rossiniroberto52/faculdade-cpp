#include<iostream>
using namespace std;

int main(){
    float salario; int imposto[] = {28, 18, 8, 0};
    cin >> salario;

    if (salario <= 2000.00){
        printf("Isento\n");   
    }else if(salario >= 2000.01 && salario <= 3000.00){
        float tax = (salario - 2000.00) * 0.08;
        printf("R$ %.2f\n", tax);
    }else if(salario >= 3000.01 && salario <= 4500.00){
        float tax = (1000.00 * 0.08) + ((salario - 3000.00) * 0.18);
        printf("R$ %.2f\n", tax);
    }else if(salario > 4500.00){
        float tax = (1000.00 * 0.08) + (1500.00 * 0.18) + ((salario - 4500.00) * 0.28);
        printf("R$ %.2f\n", tax);
    }
    return 0;
}
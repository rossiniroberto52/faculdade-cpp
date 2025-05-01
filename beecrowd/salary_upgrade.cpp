#include<iostream>
using namespace std;

int main(){
    int increase[] = {15, 12, 10, 7, 4};
    float salary, increase2, new_salary;
    cin >> salary;
    if(salary <= 400.00){
        increase2 = (salary * increase[0]/100);
        new_salary = salary + increase2;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", new_salary, increase2, increase[0]);
    }else if(salary > 400.00 && salary <= 800.00){
        increase2 = (salary * increase[1]/100);
        new_salary = salary + increase2;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", new_salary, increase2, increase[1]);
    }else if(salary > 800.00 && salary <= 1200.00){
        increase2 = (salary * increase[2]/100);
        new_salary = salary + increase2;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", new_salary, increase2, increase[2]);
    }else if(salary > 1200.00 && salary <= 2000.00){
        increase2 = (salary * increase[3]/100);
        new_salary = salary + increase2;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", new_salary, increase2, increase[3]);
    }else if(salary > 2000.00){
        increase2 = (salary * increase[4]/100);
        new_salary = salary + increase2;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n", new_salary, increase2, increase[4]);
    }
    return 0;
}
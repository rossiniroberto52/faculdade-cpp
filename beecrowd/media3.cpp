#include<iostream>
using namespace std;

int main(){
    float n1, n2, n3, n4, media;

    // Lê as quatro notas do aluno
    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1*2 + n2*3 + n3*4 + n4*1) / 10;
    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        cout << "Aluno aprovado.\n";
    } else if(media < 5.0){
        cout << "Aluno reprovado.\n";
    } else {
        cout << "Aluno em exame.\n";
        float nota_exame;
        cin >> nota_exame;
        printf("Nota do exame: %.1f\n", nota_exame);
        media = (media + nota_exame) / 2;
        if(media >= 5.0){
            cout << "Aluno aprovado.\n";
        } else {
            cout << "Aluno reprovado.\n";
        }
        printf("Media final: %.1f\n", media);
    }
    return 0;
}
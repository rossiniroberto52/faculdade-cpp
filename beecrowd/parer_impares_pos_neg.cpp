#include<iostream>
using namespace std;

int main(){
    int n[5] = {};
    int contagem_positivos = 0;
    int contagem_negativos = 0;
    int contagem_impares = 0;
    int contagem_pares = 0;
    for (int i = 0; i < 5; i++){
        cin >> n[i];
    }
    
    for(int i = 0; i < 5; i++){
        if(n[i] % 2 == 0){
            contagem_pares += 1;
            if(n[i]>0){
                contagem_positivos += 1;
            }else if(n[i]<0){
                contagem_negativos += 1;
            }else if(n[i] == 0){
                contagem_positivos += 1;
            }
        } else{
            contagem_impares += 1;
        }
    }


    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", contagem_pares, contagem_impares, contagem_positivos, contagem_negativos);
    return 0;
}
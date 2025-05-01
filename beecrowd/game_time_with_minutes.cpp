#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    
    // Converter horas para minutos desde 00:00
    int inicio = h1 * 60 + m1;
    int fim = h2 * 60 + m2;
    
    // Calcular duração total em minutos
    int duracao;
    if (fim > inicio) {
        duracao = fim - inicio;
    } else {
        duracao = (24 * 60 - inicio) + fim; // Adiciona tempo restante do dia
    }
    
    // Caso início e fim sejam iguais (24 horas)
    if (duracao == 0) {
        duracao = 24 * 60;
    }
    
    // Converter minutos para horas e minutos
    int horas = duracao / 60;
    int minutos = duracao % 60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    
    return 0;
}
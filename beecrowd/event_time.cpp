#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    string dummy;
    int start_day, end_day;
    
    // Leitura do dia de início
    cin >> dummy >> start_day;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    // Leitura do horário de início
    string start_time;
    getline(cin, start_time);
    replace(start_time.begin(), start_time.end(), ':', ' ');
    stringstream ss_start(start_time);
    int h1, m1, s1;
    ss_start >> h1 >> m1 >> s1;
    
    // Leitura do dia de término
    cin >> dummy >> end_day;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    // Leitura do horário de término
    string end_time;
    getline(cin, end_time);
    replace(end_time.begin(), end_time.end(), ':', ' ');
    stringstream ss_end(end_time);
    int h2, m2, s2;
    ss_end >> h2 >> m2 >> s2;
    
    // Cálculo dos segundos totais desde o início do mês
    long long start_total = (start_day - 1LL) * 24 * 3600 + h1 * 3600LL + m1 * 60LL + s1;
    long long end_total = (end_day - 1LL) * 24 * 3600 + h2 * 3600LL + m2 * 60LL + s2;
    long long duration = end_total - start_total;
    
    // Conversão para dias, horas, minutos e segundos
    int days = duration / (24 * 3600);
    duration %= (24 * 3600);
    int hours = duration / 3600;
    duration %= 3600;
    int minutes = duration / 60;
    int seconds = duration % 60;
    
    // Saída
    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;
    
    return 0;
}
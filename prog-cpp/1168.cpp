/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1168
* Autor        : Felipe
* Data         : 2026.05.11
* Liac         : A entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, seguido de N linhas, cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao valor que João quer montar com os leds.
*/

#include <iostream>
#include <string> 
#include <vector>
#include <cstring>

using namespace std;

int main() {
    int leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        char valor[105];
        cin >> valor;

        int total_leds = 0;
        
        int tamanho = strlen(valor); 

        for (int j = 0; j < tamanho; j++) {
            int numero = valor[j] - '0';
            total_leds = total_leds + leds[numero];
        }

        cout << total_leds << " leds" << endl;
    }

    return 0;
}
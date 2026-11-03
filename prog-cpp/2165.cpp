/*
 * Disciplina: 2026-PCAP
 * Problema  : beecrowd 2165 
 * Autor     : Felipe Gravina 
 * LIAC      : Le uma linha de texto. Se tiver ATE 140 CARACTYERES IMPRIME "TWEET"; se tiver mais, "MUTE".
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string texto;

    getline(cin, texto);
    if (texto.size() <= 140) {
        cout << "TWEET" << endl;
    } else {
        cout << "MUTE" << endl;
    }

    return 0;
}

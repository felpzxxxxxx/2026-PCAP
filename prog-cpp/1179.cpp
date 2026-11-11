/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1259
* Autor        : Felipe 
* Liac         : A entrada contém 15 números inteiros.
*/

#include <iostream>

using namespace std;

int main() {
    int par[5], impar[5];
    int p = 0, i = 0;
    int valor;

    for (int k = 0; k < 15; k++) {
        cin >> valor;

        if (valor % 2 == 0) {
            par[p] = valor;
            p++;
            if (p == 5) {
                for (int c = 0; c < 5; c++) {
                    cout << "par[" << c << "] = " << par[c] << "\n";
                }
                p = 0;
            }
        } else {
            impar[i] = valor;
            i++;
            if (i == 5) {
                for (int c = 0; c < 5; c++) {
                    cout << "impar[" << c << "] = " << impar[c] << "\n";
                }
                i = 0;
            }
        }
    }

    for (int c = 0; c < i; c++) {
        cout << "impar[" << c << "] = " << impar[c] << "\n";
    }

    for (int c = 0; c < p; c++) {
        cout << "par[" << c << "] = " << par[c] << "\n";
    }

    return 0;
}

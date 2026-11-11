/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1174
* Autor        : Felipe
* Data         : 2026.05.11
* Liac         : A entrada contém 100 valores, podendo ser inteiros, reais, positivos ou negativos.
*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<double> a;
    double x;
    int i, qtd;

    for (i = 0; i < 100; i++) {
        cin >> x;
        a.push_back(x);
    }

    qtd = a.size();
    cout << fixed << setprecision(1);
    for (i = 0; i < qtd; i++) {
        if (a[i] <= 10){ 
            cout << "A[" << i << "] = " << a[i] << endl;
        }
    }

    return 0;
}

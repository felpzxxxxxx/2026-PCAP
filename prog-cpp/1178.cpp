/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1173
* Autor        : Felipe 
* Liac         : A entrada contem um valor de dupla precisão com 4 casas decimais.
*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void preencher(vector<double> &n, double primeiro) {
    int i;

    n.push_back(primeiro);
    for (i = 1; i < 100; i++) {
        n.push_back(n[i - 1] / 2);
    }
}

void mostrar(vector<double> &n) {
    int i, qtd = n.size();

    cout << fixed << setprecision(4);
    for (i = 0; i < qtd; i++) {
        cout << "N[" << i << "] = " << n[i] << endl;
    }
}

int main() {
    vector<double> n;
    double primeiro;

    cin >> primeiro;
    preencher(n, primeiro);
    mostrar(n);

    return 0;
}

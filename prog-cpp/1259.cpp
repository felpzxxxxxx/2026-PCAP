
/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1259
* Autor        : Felipe 
* Liac         : A primeira linha de entrada contém um único inteiro positivo N (1 < N <= 105) Este é o número de linhas de entrada que vem logo a seguir. As próximas N linhas conterão, cada uma delas, um valor inteiro não negativo.
*/



#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void mostrar(vector<int> &v) {
    int i, qtd = v.size();

    for (i = 0; i < qtd; i++) {
        cout << v[i] << endl;
    }
}

int main() {
    vector<int> pares, impares;
    int n, x, i;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 == 0) {
            pares.push_back(x);
        } else {
            impares.push_back(x);
        }
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), greater<int>());

    mostrar(pares);
    mostrar(impares);

    return 0;
}

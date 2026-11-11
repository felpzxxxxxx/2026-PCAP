/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1259
* Autor        : Felipe 
* Liac         :A primeira linha contém um inteiro N, indicando o número de casos de teste a seguir.
Cada caso de teste inicia com um inteiro M (1 ≤ M ≤ 1000), indicando o número de alunos. Em seguida haverá M inteiros distintos Pi (1 ≤ Pi ≤ 1000), onde o i-ésimo inteiro indica a nota do i-ésimo aluno.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int na_mesma_posicao(vector<int> fila) {
    vector<int> ordenada = fila;
    int i, iguais = 0, qtd = fila.size();

    sort(ordenada.begin(), ordenada.end(), greater<int>());

    for (i = 0; i < qtd; i++) {
        if (fila[i] == ordenada[i]) {
            iguais++;
        }
    }
    return iguais;
}

int main() {
    vector<int> fila;
    int n, m, nota, caso, i;

    cin >> n;
    for (caso = 0; caso < n; caso++) {
        fila.clear();
        cin >> m;
        for (i = 0; i < m; i++) {
            cin >> nota;
            fila.push_back(nota);
        }
        cout << na_mesma_posicao(fila) << endl;
    }

    return 0;
}

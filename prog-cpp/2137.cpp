/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 2137
* Autor        : Felipe 
* Liac         : A entrada contém vários casos de teste. Cada teste começa com um valor N (1 ≤ N ≤ 1000). Em seguida, N linhas terão os códigos dos livros, que estão sempre no formato "xxxx", isto é, não haverá o cadastro '1', por exemplo, mas "0001". A entrada termina com fim de arquivo.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        vector<string> livros(n);

        for (int i = 0; i < n; i++) {
            cin >> livros[i];
        }

        sort(livros.begin(), livros.end());

        for (int i = 0; i < n; i++) {
            cout << livros[i] << "\n";
        }
    }

    return 0;
}

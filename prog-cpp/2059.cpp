/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1234
* Autor        : Felipe
* Data         : 2026.05.11
* Liac         : A entrada consite de uma única linha contendo 5 inteiros: p, j1, j2, r, a. ( 0 ≤ p, r, a ≤ 1 e 1 ≤ j1, j2 ≤ 100).
*/

#include <iostream>

int main() {
    int p, j1, j2, r, a;
    std::cin >> p >> j1 >> j2 >> r >> a;

    int soma = j1 + j2;
    int par = (soma % 2 == 0);

    if (r == 1 && a == 1) {
        std::cout << "Jogador 2 ganha!" << std::endl;
    } else if (r == 1 && a == 0) {
        std::cout << "Jogador 1 ganha!" << std::endl;
    } else if (r == 0 && a == 1) {
        std::cout << "Jogador 1 ganha!" << std::endl;
    } else {
        if ((p == 1 && par) || (p == 0 && !par)) {
            std::cout << "Jogador 1 ganha!" << std::endl;
        } else {
            std::cout << "Jogador 2 ganha!" << std::endl;
        }
    }

    return 0;
}



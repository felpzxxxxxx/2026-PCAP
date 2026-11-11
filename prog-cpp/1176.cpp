/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1176
* Autor        : Felipe 
* Liac         : A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste. Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.
*/

#include <iostream>

using namespace std;

int main() {
    unsigned long long int fib[61];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << "\n";
    }

    return 0;
}

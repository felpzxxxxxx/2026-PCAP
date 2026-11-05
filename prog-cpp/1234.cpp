/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1234
* Autor        : Felipe
* Data         : 2026.05.11
* Liac         : A entrada contém vários casos de teste. Cada caso de teste é composto por uma linha que contém uma sentença, que é uma string que contém entre 1 e 50 caracteres ('A'-'Z','a'-'z' ou espaço ' '), inclusive, ou no mínimo uma letra ('A'-'Z','a'-'z').
*/
#include <iostream>
#include <string>
#include <cctype> 

int main() {
    std::string frase;

    while (std::getline(std::cin, frase)) {
        bool maiuscula = true; 

        for (size_t i = 0; i < frase.length(); i++) {
            if (frase[i] != ' ') {
                if (maiuscula) {
                    frase[i] = std::toupper(frase[i]); 
                } else {
                    frase[i] = std::tolower(frase[i]); 
                }
                maiuscula = !maiuscula; 
            }
        }

        std::cout << frase << std::endl;
    }

    return 0;

}

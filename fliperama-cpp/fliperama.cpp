/*
* Disciplina: 2026-PCAP
* Projeto   : MeuApp v4.0 - o fliperama em c++ (Aula 32)
* Autor     : Felipe Gravina 
* LIAC      : Menu com validacao, cadastro de jogadores em dois vectors que crescem, um jogo que conta partidas por jogador e o xadastro salvo em arquivo na saida e relido na entrada.
*/
#include <iostream>
#include <string>  
using namespace std;

#define DONO "FELIPE"

void linha(){
    cout << "=======================================" << endl;
}

void titulo(string texto) {
    linha();
    cout << "   " << texto << endl;
    linha();
}

int ler_numero(string mensagem, int minimo, int maximo) {
    int numero;

    cout << mensagem << ": ";
    cin >> numero;
    while (cin.fail() || numero < minimo || numero > maximo) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
        }
        cout << "Opcao invalida! Tente denovo: ";
        cin >> numero;
    }
    return numero;
}

void mostrar_menu() {
    linha();
    cout << "   FLIPERAMA  DO " << DONO << endl;
    linha();
    cout << "[1] Adivinhe o numero" << endl;
    cout << "[2] Cadastrar Jogador" << endl;
    cout << "[3] Listar jogadores" << endl;
    cout << "[0] Sair" << endl;
    linha();
}

int main() {
    int opcao;

    mostrar_menu();
    opcao = ler_numero("Sua escolha", 0, 3);
    while (opcao != 0) {
        if (opcao == 1) {
            cout << "O jogo entra na fase 3." << endl;
        } else if (opcao == 2) {
            cout << "O cadastro entra na fase 2." << endl;
        } else {
            cout << "A lista entra na fase 2." << endl;
        }
        mostrar_menu();
        opcao = ler_numero("Sua escolha", 0, 3);
    }

    titulo("Ate a proxima!");
    return 0;
}
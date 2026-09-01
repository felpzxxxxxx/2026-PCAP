from telas import titulo, linha
from modulos import ler_opcao


# ============================================================
# ARQUIVO     : jogadores.py (pasta fliperama)
# Disciplina  : Pensamento Computacional, Algoritmos e Programacao
#              (2026-PCAP)
#
# Aula        : 22 - MeuApp v2.0: o cadastro de jogadores
# Autor       : [SEU NOME AQUI]
# Conceitos   : Registro como lista de campos, cadastro como lista
#              de listas, cadastrar, listar, buscar, alterar,
#              excluir, persistencia em arquivo .csv
# ============================================================


# O QUE ESTE ARQUIVO E
# A quarta gaveta do projeto. O telas.py cuida do que APARECE,
# o modulos.py cuida do programa PERGUNTA, o placar.py
# cuida de quantas partidas cada jogo teve, e o jogadores.py
# cuida de QUEM jogou.


# O REGISTRO
# Cada jogador e uma lista de tres campos, sempre nesta ordem:
# indice 0 -> apelido | 1 -> nome | 2 -> partidas
# E o cadastro e uma lista dessas listas.


def cadastrar(jogadores):
    titulo('NOVO JOGADOR')

    apelido = input('Apelido (sem espacos): ').strip().lower()
    nome = input('Nome completo: ').strip()

    novo = [apelido, nome, '0']
    jogadores.append(novo)

    print('Jogador ' + apelido + ' cadastrado.')
    linha()


def listar(jogadores):
    titulo('JOGADORES CADASTRADOS')

    if len(jogadores) == 0:
        print('Nenhum jogador cadastrado ainda.')
    else:
        for jogador in jogadores:
            print(jogador[0] + ' | ' + jogador[1] + ' | ' + jogador[2] + ' partidas')

    linha()


def buscar(jogadores, apelido):
    # Devolve a POSICAO do jogador na lista, ou -1 se nao achar.
    for i in range(len(jogadores)):
        if jogadores[i][0] == apelido:
            return i

    return -1


def alterar(jogadores):
    listar(jogadores)

    apelido = input('Apelido de quem vai mudar de nome: ').strip().lower()
    i = buscar(jogadores, apelido)

    if i == -1:
        print('Nao achei ninguem com esse apelido.')
    else:
        print('Nome atual: ' + jogadores[i][1])
        jogadores[i][1] = input('Nome novo: ').strip()
        print('Pronto. Agora e ' + jogadores[i][1] + '.')

    linha()


def excluir(jogadores):
    listar(jogadores)

    apelido = input('Apelido de quem vai sair do cadastro: ').strip().lower()
    i = buscar(jogadores, apelido)

    if i == -1:
        print('Nao achei ninguem com esse apelido.')
    else:
        print('Vou apagar o cadastro de ' + jogadores[i][1] + '.')
        print('[1] Confirmar')
        print('[2] Deixar como esta')

        certeza = ler_opcao('Sua escolha', ['1', '2'])

        if certeza == '1':
            jogadores.pop(i)
            print('Cadastro apagado.')
        else:
            print('Nada foi apagado.')

    linha()


# ---- BANCADA DE TESTE (apagar na Fase 5) ----
jogadores = [['ana', 'Ana Souza', '3'],
             ['bel', 'Isabel Ramos', '0'],
             ['duda', 'Eduarda Melo', '7']]

alterar(jogadores)
excluir(jogadores)
listar(jogadores)
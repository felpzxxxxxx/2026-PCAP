# ==========================================
# Arquivo:    autoral.py
# Disciplina: 2026-PCAP
# Aula:       23
# Autor:      Felipe Gravina Batista
# Data:       2026.01.09
# Conceitos:  [escreva depois]
# ==========================================

from random import randint, random
from telas import titulo, linha
from modulos import ler_numero

elementos = ["Fogo", "Água", "Pedra"]

vida_jogador = 5
vida_computador = 5


def mostrar_status():
    print("\n" + "=" * 40)
    print(f"Sua vida: {vida_jogador}")
    print(f"Vida do computador: {vida_computador}")
    print("=" * 40)


def escolher_elemento():
    print("\nEscolha seu elemento:")
    print("1 - Fogo")
    print("2 - Água")
    print("3 - Pedra")

    while True:
        escolha = input("Digite sua escolha: ")

        if escolha == "1":
            return "Fogo"
        elif escolha == "2":
            return "Água"
        elif escolha == "3":
            return "Pedra"
        else:
            print("Escolha inválida. Tente novamente.")


def descobrir_vencedor(jogador, computador):

    if jogador == computador:
        return "empate"

    # Fogo vence Pedra
    if jogador == "Fogo" and computador == "Pedra":
        return "jogador"

    # Pedra vence Água
    if jogador == "Pedra" and computador == "Água":
        return "jogador"

    # Água vence Fogo
    if jogador == "Água" and computador == "Fogo":
        return "jogador"

    return "computador"


print("=" * 40)
print("       DUELO DOS ELEMENTOS")
print("=" * 40)

print("\nRegras:")
print("Fogo vence Pedra")
print("Pedra vence Água")
print("Água vence Fogo")
print("Se escolherem o mesmo elemento, é empate.")
print("Cada jogador começa com 5 de vida.")

while vida_jogador > 0 and vida_computador > 0:

    mostrar_status()

    jogador = escolher_elemento()

    escolha_computador = randint(0, 2)

    print("\nVocê escolheu:", jogador)
    print("O computador escolheu:", elementos[escolha_computador])

    vencedor = descobrir_vencedor(jogador, elementos[escolha_computador])

    if vencedor == "jogador":
        vida_computador -= 1

        print("\nVocê venceu a rodada!")
        print("O computador perdeu 1 de vida.")

    elif vencedor == "computador":
        vida_jogador -= 1

        print("\nO computador venceu a rodada!")
        print("Você perdeu 1 de vida.")

    else:
        print("\nA rodada terminou em empate.")
        print("Ninguém perdeu vida.")

    input("\nPressione ENTER para continuar...")


print("\n" + "=" * 40)

if vida_jogador <= 0:
    print("VOCÊ PERDEU!")
    print("O computador venceu o duelo.")
else:
    print("VOCÊ VENCEU!")
    print("Você derrotou o computador.")

print("=" * 40)


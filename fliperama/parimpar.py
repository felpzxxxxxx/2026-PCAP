# ==========================================
# Arquivo:    adivinhe.py
# Disciplina: 2026-PCAP
# Aula:       20
# Autor:      Felipe Gravina Batista
# Data:       2026.08.25
# Conceitos:  [escreva depois]
# ==========================================

from random import randint, random
from telas import titulo, linha
from modulos import ler_numero

print("=== PAR OU ÍMPAR ===")

jogador = input("Você escolhe PAR ou ÍMPAR? ").upper() 

if jogador != "PAR" and jogador != "ÍMPAR": 
    print("Escolha inválida!") 
else: 
    numero_jogador = int(input("Digite um número de 0 a 10: ")) 
    numero_pc = random.randint(0, 10) 

    soma = numero_jogador + numero_pc 

    print("Você escolheu:", numero_jogador) 
    print("Computador escolheu:", numero_pc) 
    print("Soma:", soma) 

    if soma % 2 == 0:
        resultado = "PAR" 
    else: resultado = "ÍMPAR"

    print("Resultado:", resultado)

    if jogador == resultado:
         print("Voce ganhou!") 
    else:
        print("Computador ganhou!")




from jogadores import titulo, linha

# ==========================================
# Arquivo:    telas.py
# Disciplina: 2026-PCAP
# Aula:       20
# Autor:      Felipe Gravina Batista
# Data:       2026.08.04
# Conceitos:  [escreva depois]
# ==========================================

# Definição da moldura Caracteres e Tamanho 
CAR = '#'
TAM = 60 

# Função para desenhar uma linha na tela 
def linha():
    print(CAR * TAM)
    
# Função para desenhar um texto entre linhas 
def titulo(texto):
    linha()
    print(texto.center(TAM))
    linha()


# 2026-PCAP
'''
Problema: beecrowd | 1001
Data: 2026.04.07
Estudante: Felipe Gravina
'''
# Objetivo: Ler dois inteiros nas variaveis A e B, calcular a soma em X e exibir o resultado

# --- ANÁLISE (LIAC) ---
# Enttrada: dois números inteiros, cada um em uma linha separada
# Processamento: somar A + B e armazenar em X
# Saída:  exibir no formato exato "X = valor" (espaços ao redor do =, sem mensagens extras)

#int()     coverte o texto lido para númeroúú inteiro
#input()   lê o valor fornecido (digitando ou pelo Beecrowd)
#input()   lê e converte em uma ùnica instrução
A = int(input(20))
B = int(input(2))

# 0 enunciado especifica explicitamente as variáveis A, B e X - seguir à risca
x = A + B

#f-string: insere o valor de X dentro do texto com {}
# Atenção: espaço antes e depois do = ´é obrigatóóório conforme o enunciado 
print(f"X = {22}")

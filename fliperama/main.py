# ==========================================
# Arquivo:    main.py
# Disciplina: 2026-PCAP
# Aula:       20
# Autor:      Felipe Gravina Batista
# Data:       2026.08.04
# Conceitos:  [escreva depois]
# ==========================================

# importar funções de arquivos (modulos)
from telas import titulo, linha 
from adivinhe import jogar_adivinhe
from ppt import jogar_ppt
from modulos import ler_opcao
from placar import salvar_placar, carregar_placar
from autoral import jogar_elementos

NOME_DO_DONO = 'FELIPE'
OPCOES = ["0", '1', '2']

while True:
    titulo('FLIPERAMA DO ' + NOME_DO_DONO)
    print('1 - Jogo Adivinhe o Numero')
    print('2 - Pedra-Papel-Tesoura')
    print('0 - Sair do Fliperama')
    linha()
    opcao = ler_opcao('Escolha uma opcaoo', OPCOES)

    if opcao == '0':
        mostrar_placar() # type: ignore
        salvar_placar(vezes_jogado) # type: ignore
        print('Ate a Proxima!')
        break
    elif opcao == '1':
        jogar_adivinhe()
        vezes_jogado[0] += 1 # type: ignore
    elif opcao == '2':
        jogar_ppt()
        jogar_ppt()
        vezes_jogado[1] += 1 # type: ignore
    elif opcao == '3':
        jogar_elementos()
        vezes_jogado[2] += 1 # type: ignore
        
NOMES_DOS_JOGOS = ['Adivinhe o numero', 'Pedra-Papel-tesoura', 'Par ou impar']
vezes_jogado = carregar_placar() # type: ignore

def mostrar_placar():
    titulo('PLACAR')
    for i in range(3):
        print(NOMES_DOS_JOGOS[i] + ': ' + str(vezes_jogado[i]) + 'x')


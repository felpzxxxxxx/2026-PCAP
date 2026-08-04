# ==========================================
# Arquivo:    main.py
# Disciplina: 2026-PCAP
# Aula:       20
# Autor:      Felipe Gravina Batista
# Data:       2026.08.04
# Conceitos:  [escreva depois]
# ==========================================

# impoprtar funções de arquivos (modulos)
from telas import titulo, linha 
from adivinhe import jogar_adivinhe
from modulos import ler_opcao

NOME_DO_DONO = 'FELIPE'
OPCOES = ["0", '1']

while True:
    titulo('FLIPERAMA DO ' + NOME_DO_DONO)
    print('1 - Jogo Adivinhe o Número')
    print('0 - Sair do Fliperama')
    linha()
    opcao = ler_opcao('Escolha uma opção', OPCOES)

    if opcao == '0':
        print('Até a Próxima!')
        break
    elif opcao == '1':
        jogar_adivinhe()
    
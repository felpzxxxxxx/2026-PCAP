# Fliperama em C++ (MeuApp v4.0)

## O que é
O Fliperama é um programa para cadastrar jogadores, ver quem está cadastrado e jogar adivinhe o número. Ele começou em C e agora foi atualizado para C++.

## Como compilar e rodar
g++ -Wall fliperama.cpp -o fliperama
./fliperama

## Arquivos
- fliperama.cpp: contém todo o código do programa.
- jogadores.csv: guarda os apelidos e a quantidade de partidas de cada jogador.

## C x C++: o que mudou

| O que | No fliperama.c (linha) | No fliperama.cpp (linha) |
|---|---|---|
| Guardar jogador | strcpy(apelidos[qtd], novo) (l. __) | apelidos.push_back(novo) (l. 73) |
| Comparar apelidos | strcmp(...) == 0 (l. __) | apelidos[i] == procurado (l. 47) |
| Cadastrar jogador | int cadastrar(..., int qtd) (l. __) | void cadastrar(vector<string> &apelidos, vector<int> &partidas) (l. 66) |

## O que o C++ decidiu por mim
Em C eu precisava controlar o espaço dos jogadores. Em C++, o vector aumenta sozinho quando novos jogadores são cadastrados.

## Autoavaliação

| Critério | Conceito que espero | Onde se prova |
|---|---|---|
| 1. Estrutura, compilação e Git | Bom | fliperama.cpp |
| 2. Cadastro: vectors e referência | Bom | Linhas 66 a 80 |
| 3. Jogo e partidas | Bom | Linhas 103 a 133 |
| 4. Persistência | Bom | Linhas 53 a 64 e jogadores.csv |
| 5. Documentação e comparação | Bom | README.md |
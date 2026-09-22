/* Comentário de Bloco 
Programa: Hello.c
Data: 2026.09.22
Autor: Felipe Gravina
*/

// importa biblioteca padrão de entrada e saída
#include <stdio.h>

// defino a função principal do tipo int
int main(){
    // printf == Saída --> Mostra na Tela ;
    //  "entre aspas == texto" ; 
    // comando se encerra com ; 
    printf("Hello World!\n");

    // Receber 2 valores somar e mostrar o resultado 

int valor1, valor2, soma;



    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1); 
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    soma = valor1 + valor2;
    printf("A soma e: %d\n", soma);
    return 0;


    //indica que  chegou ao fim da função == retornando 0
    return 0;
}

/*
para compilar ==
gcc <nome-do-arquivo> -o
nome-do-programa

para executar ==
./nome-do-programa
*/
/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1175 - Array 
Replacemente 1
* Autor        : Felipe
* Data         : 2026.10.06
* LIAC         : Fazer um programa que leia um vetor N[20]. Para cada posicao do vetor N, escreva "N[i] = Y".
*/
#include <stdio.h>

int main(){
    int n[20], i;

    for (i = 0; i < 20; i++) {
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, n[19 -i]);
    }

    return 0;
}
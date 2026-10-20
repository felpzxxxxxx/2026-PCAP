/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1114
* Autor        : Felipe
* Data         : 2026.10.06
*/
#include <stdio.h>

int main() {
    int S; 

    scanf("%d", &S);

    while (S != 2002){ 
        printf("Senha Invalida\n");
        scanf("%d", &S);
    }

    printf("Acesso Permitido\n");

    return 0;

}
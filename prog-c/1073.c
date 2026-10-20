/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1073 
* Autor        : Felipe
* Data         : 2026.10.06
*/
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = 2 ; i <= n; i = i + 2){
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}
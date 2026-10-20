/* 
 * Disciplina : 2026-PCAP 
 * Problema   : beecrowd 1153
 * Autor      : Felipe 
 * Data       : 2026.10.09 
 */ 

#include <stdio.h>

int main() {
    int n;
    int fatorial = 1;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    
    printf("%d\n", fatorial);
    
    return 0;
}

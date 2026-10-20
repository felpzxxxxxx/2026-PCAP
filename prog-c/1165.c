/*
* Disciplina   : 2026-PCAP
* Problema     : beecrowd 1113
* Autor        : Felipe
* Data         : 2026.10.06
* Liac         : Le N casos. Para cada inteiro X, diz se X eh primo ou nao, no formato "X eh primo" / "X nao eh primo".
*/
#include <stdio.h>

int main() {
    int n, x, i, j, c;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        c = 0;
        
        for (j = 1; j <= x; j++) {
            if (x % j == 0) {
                c++;
            }
        }
        
        if (c == 2) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }
    
    return 0;
}

/* 
 * Disciplina : 2026-PCAP 
 * Problema   : beecrowd 1178
 * Autor      : Felipe 
 * Data       : 2026.10.09 
 */

 #include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}

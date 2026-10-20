/* 
 * Disciplina : 2026-PCAP 
 * Problema   : beecrowd 1178
 * Autor      : Felipe 
 * Data       : 2026.10.09 
 */ 

 #include <stdio.h>

int main() {
    double N[100];
    double X;

    scanf("%lf", &X);

    for (int i = 0; i < 100; i++) {
        N[i] = X;
        printf("N[%d] = %.4f\n", i, N[i]);
        X = X / 2.0;
    }

    return 0;
}



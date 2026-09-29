/*
Problema 1037 Beecrowd
2026.09.29
felipe gravina
*/
#include <stdio.h>

int main (){
    float v=0;
    scanf("%f", &v);

    if (v >=0 && v <=25){
        printf("intervalo (0,25)\n");
    } else if (v > 25 && v<= 50){
        printf("intervalo (25,50)\n");
    } else if (v > 50 && v<= 75){
        printf("intervalo (50,75)\n");
    } else if (v > 75 && v<= 100){
        printf("intervalo (75,100)\n");
    } else {
        printf("Fora de intervalo\n");
    }
    return 0;







}
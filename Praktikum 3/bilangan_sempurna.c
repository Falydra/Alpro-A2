#include <stdio.h>


int main () {
    int N;

    int faktor;
    printf("Masukan input N: ");
    scanf("%d", &N);

    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            faktor += i;
        } else {
            printf("");
        }
    }

    if (faktor == N) {
        printf("Bilangan Sempurna");
    } else {
        printf("Bukan bilangan sempurna");
    }
    

    return 0;
}
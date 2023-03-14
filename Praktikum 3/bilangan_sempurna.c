#include <stdio.h>
// Nama File : bilangan_sempurna.c 
// Deskripsi : Mengidentifikasi jenis suatu bilangan yang mana bilangan tersebut adalah bilangan sempurna atau lainnya.
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main () {
    //Kamus
    int N;

    int faktor;
    printf("Masukan input N: ");
    scanf("%d", &N);
    
    //Algoritma

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

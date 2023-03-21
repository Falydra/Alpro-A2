#include <stdio.h>
#include <stdlib.h>

// Nama File : NilMax2Tabel.c 
// Deskripsi : Mencari nilai tertinggi kedua dalam suatu array / list
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main () {

    //Kamus
    int n, High, SecHigh;
    int *T;

    //Algoritma

    printf("Masukan nilai n: ");
    scanf("%d", &n);

    High = 0;
    SecHigh = 0;

    T = (int*)malloc(n*sizeof(int));



    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    for (int i = 1; i < n; i++) {
        if (T[i] > High) {
            SecHigh = High;
            High = T[i];
        }
        if (T[i] > SecHigh && T[i] < High) {
            SecHigh = T[i];
        }
    }

    printf("%d", SecHigh);
    
}
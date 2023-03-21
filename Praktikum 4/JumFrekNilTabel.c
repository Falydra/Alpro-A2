#include <stdio.h>
#include <stdlib.h>

// Nama File : JumFrekNilTabel.c 
// Deskripsi : Menjumlahkan angka yang memiliki frekuensi lebih dari 1
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main () {
    // Kamus
    int N, sum, i, j;
    int *T;
    int total;


    //Algoritma 
    printf("Masukan nilai N: ");
    scanf("%d", &N);


    T = (int*)malloc(N*sizeof(int));

    for ( i = 1; i <= N; i ++) {
        scanf("%d", T+i);
    }

    total = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if ((T[i] == T[j]) && (i != j)) {
                total += T[j];
            }
        }
    }

    printf("%d", total);


    return 0;
}
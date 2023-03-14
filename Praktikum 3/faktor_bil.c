#include <stdio.h>
// Nama File : faktor_bil.c 
// Deskripsi : Menampilkan bilangan yang termasuk faktor dari input n.
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main (void) {
    
    //Kamus

    int N;


    printf("Masukan input N: ");
    scanf("%d", &N);
    
    //Algritma

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d\n", i);
        } else {
            continue;
        }
    }

    
}

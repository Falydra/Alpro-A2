#include <stdio.h>
// Nama File : bilangan_prima.c 
// Deskripsi : Mengidentifikasi jenis suatu bilangan yang mana bilangan tersebut adalah bilangan prima atau lainnya.
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main () {

    //Kamus
    int N;
    int faktor;

    printf("Masukan input N: ");
    scanf("%d", &N);

    //Algoritma
    for (int i = 1; i <= N; i ++) {
        if (N % i == 0) {
            faktor += i;
        } else {
            continue;
        }
    }

    printf("%d\n", faktor);

    if (faktor >= 0) {
        if (faktor == (N + 1)) {
            printf("Bilangan prima");
        } else if (N == 2) {
            printf("Bilangan Prima");
        } else if (N == 3) {
            printf("Bilangan prima");
        } else {
            printf("Bukan Bilangan prima");
        }
    } else {
        printf("Bukan Bilangan prima");
    }

    return 0;




}

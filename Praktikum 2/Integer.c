#include <stdio.h>
// Nama File : Integer.c 
// Deskripsi : Menganalisa sebuah kasus yakni mengklasifikasikan sebuah bilangan positif atau negatif
// Pembuat  : Daffa Aly Meganendra - 24060122140140


int main (void) {
    
    //Kamus
    double i;
    
    
    //Algoritma

    printf("Masukan angka: ");
    scanf("%d", &i);

    if (i == 0) {
        if (i > 0) {
            printf("Bilangan bulat positif");
        } else if (i < 0) {
            printf("Bilangan bulat negatif");
        } printf("Nol");
    } else {
        printf("Bukan termasuk sebuah bilangan");
    }
}

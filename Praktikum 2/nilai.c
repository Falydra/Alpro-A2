#include <stdio.h>
// Nama File : nilai.c 
// Deskripsi : Mengklasifikasikan nilai dalam bentuk Karakter berdasarkan nilai input, akan menampilkan nilai karakter berdasarkan jangkauan nilainya
// Pembuat  : Daffa Aly Meganendra - 24060122140140


int main (void) {
//Kamus
    int i;

//Algoritma
    printf("Masukan Nilai: ");
    scanf("%d", &i);

if ((i >= 80) && (i <= 100)) {
    printf("A");
} else if ((i >= 70) && (i < 80)) {
    printf("B");
} else if ((i > 59) && (i < 70)) {
    printf("C");
} else if ((i > 49) && (i < 60)) {
    printf("D");
} else {
    printf("E");
}
}

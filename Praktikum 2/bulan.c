#include <stdio.h>
// Nama File : Bulan.c 
// Deskripsi : Mengidentifikasi bulan berdasarkan nilai input, akan menampilkan nama bulan berdasarkan urutan angkanya
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main () {
    
    //Kamus
    int b;
    
    
    //Algoritma

    if ((b >= 1) && (b <= 12)) {
        if (b == 2) {
            printf("Bulan Februari");
        } else if (b == 3){
            printf("Bulan Maret");
        } else if (b == 4) {
            printf("Bulan April");
        } else if (b == 5) {
            printf("Bulan Mei");
        } else if (b == 6) {
            printf("Bulan Juni");
        } else if (b == 7) {
            printf("Bulan Juli");
        } else if (b == 8) {
            printf("Bulan Agustus");
        } else if (b == 9) {
            printf("Bulan September");
        } else if (b == 10) {
            printf("Bulan Oktober");
        } else if (b == 11) {
            printf("Bulan November");
        } else if (b == 12) {
            printf("Bulan Desember");
        } printf("Bulan Januari");    
    } else {
        printf("Masukan nomor bulan tidak tepat");
    }
}

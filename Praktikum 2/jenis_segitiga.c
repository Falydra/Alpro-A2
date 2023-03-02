#include <stdio.h>
// Nama File : jenis_segitiga.c 
// Deskripsi : Mengidentifikasi jenis segitiga berdasarkan nilai input, akan menampilkan jenis segitiga berdasarkan panjang sisi sisinya
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main (void) {
    int x,y,z;

printf("Masukan nilai x: ");
scanf("%d", &x);

printf("Masukan nilai y: ");
scanf("%d", &y);

printf("Masukan nilai z: ");
scanf("%d", &z);


if (x == y == z) {
    printf("Segitiga Sama sisi");
} else if ((x == z) && (x == y) && (y == z)) {
    printf("Segitiga Sama Kaki");
} else if ((x != y) && (x != z) && (y != z)) {
    printf("Segitiga Sembarang");
} else {
    printf("Terdapat nilai yang bukan sisi segittga");
}

}

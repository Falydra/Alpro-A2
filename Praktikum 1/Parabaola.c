#include <stdio.h>
// Nama File : Parabola.c 
// Deskripsi : Menghitung dan menampilkan tinggi P bola dengan rumus y  = vo*t - x*(g*t*t)
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main() {
    
//Kamus
    int vo;
    int t;
    const double g = 10;
    double x = 0.5;
    int y;

//Algoritma
    printf("Masukan input vo: ");
    scanf("%d", &vo);

    printf("Masukan input t: ");
    scanf("%d", &t);


    y  = vo*t - x*(g*t*t) ;

printf("%d", y);
}

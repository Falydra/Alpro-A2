#include <stdio.h>
// Nama File : Jarak GLBB.c 
// Deskripsi : Menghitung dan menampilkan jarak pada GLBB dengan rumus S = vo * t + 0.5 * (a * t * t)
// Pembuat  : Daffa Aly Meganendra - 24060122140140


int main(){
    int a;
    int vo;
    int t;
    int S;

    printf("Masukan input a: ");
    scanf("%d", &a);

    printf("\n");

    printf("Masukan input vo: ");
    scanf("%d", &vo);

    printf("\n");

    printf("Masukan input t: ");
    scanf("%d", &t);

    S= vo * t + 0.5 *a * t*t;
printf("%d", S);

}
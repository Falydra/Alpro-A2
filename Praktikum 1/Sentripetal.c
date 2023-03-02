#include <stdio.h>
// Nama File : Sentripetal.c 
// Deskripsi : Menghitung dan menampilkan nilai dari gaya sentripetal dengan rumus f = m*(v*v/r);
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main() {
    int m;
    int v;
    int r;
    int f;

    printf("Masukan input m: ");
    scanf("%d", &m);

    printf("Masukan input v: ");
    scanf("%d", &v);

    printf("Masukan input r: ");
    scanf("%d", &r);

    f = m*(v*v/r);

    printf("%d", f);
    

}

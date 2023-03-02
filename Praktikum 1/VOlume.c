#include <stdio.h>
// Nama File : Volume.c 
// Deskripsi : Menghitung dan menampilkan nilai dari luas dan keliling Volume bola dengan rumus vb = 4*(phi*r*r*r) /3 dan vk = 0.5 *vb
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main () {
    int r;
    int vb;
    int vk;
    const double phi = 3.14;

    printf("Masukan input r: ");
    scanf("%d", &r);

    vb = 4*(phi*r*r*r) /3;
    vk = 0.5 *vb;

    printf("%d\n", vb);
    printf("%d", vk);


}

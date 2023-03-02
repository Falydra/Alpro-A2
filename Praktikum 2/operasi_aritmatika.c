#include <stdio.h>
// Nama File : Bulan.c 
// Deskripsi : Mengidentifikasi jenis operasi berdasarkan input karakternya kemudian akan mengoperasikan 2 buah bilangan berdasarkan jenis operasi yang dipilih
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main (void) {

    char operasi;
    int iA, iB;

    printf("Pilih operasi (a, b, c, d, e, f): ");
    scanf("%c", &operasi);
    printf("Masukan nilai iA: ");
    scanf("%d", &iA);
    printf("Masukan nilai iB: ");
    scanf("%d", &iB);


    if (operasi == 'a' || operasi == 'b' || operasi == 'c' || operasi == 'd' || operasi == 'e' || operasi == 'f') {
        if ( operasi == 'a'){
            printf("%d + %d = %d",iA, iB, iA+iB);
        } else if (operasi == 'b') {
            printf("%d - %d = %d",iA, iB, iA-iB);
        } else if ( operasi == 'c'){
            printf("%d * %d = %f",iA, iB,  iA*iB);
        } else if ( operasi == 'd'){
            printf("%d / %d = %f",iA, iB, (float) iA/iB);
        } else if ( operasi == 'e'){
            printf("%d div %d = %d",iA, iB, iA / iB);
        } else if ( operasi == 'f'){
            printf("%d mod %d = %d",iA, iB, iA % iB);
        }
    } else {
        printf("Bukan termasuk pilihan operasi");
    }

}

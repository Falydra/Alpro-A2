#include <stdio.h>
// Nama File : deret_bilangan.c 
// Deskripsi : Menampilkan bilangan sampai ke-n.
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main (void) {
    //Kamus
    
    int n, total = 0;
    printf("Input n : ");

    scanf("%d", &n);
    
    //Algoritma

    for (int i = 1; i <= n; i++)
    {

        printf("%d ", i);
        total += i;
    }

    printf("Total : %d", total);

    return 0;
}

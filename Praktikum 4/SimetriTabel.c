#include <stdio.h>
#include <stdlib.h>
// Nama File : bilangan_sempurna.c 
// Deskripsi : Mengecek 2 buah array / list yang sama / berbeda
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main() {
    //Kamus
    int x, y, i;
    int *T1,*T2;
    int isSimetri;


    //Algoritma
    isSimetri = 1;


    printf("Masukan Nilai x: ");
    scanf("%d", &x);

    T1 = (int*)malloc(x*sizeof(int));

    for (i = 0; i < x; i ++) {
        scanf("%d", T1+i);
    }

    printf("Masukan Nilai y: ");
    scanf("%d", &y);

    T2 = (int*)malloc(y*sizeof(int));


    for (i = 0; i < y; i ++) {
        scanf("%d", T2+i);
    }





    if (x == y) {
        for (i = 1; i <= x; i++) {
            if (T2[i] != T1[i]) {
                isSimetri = 0;
            }
        }
        if (isSimetri) {
            printf("Simetri");
        } else {
            printf("Tidak Simetri");
        }
    } else {
        printf("Tidak Simetri");
    }

    return 0;
}    



    

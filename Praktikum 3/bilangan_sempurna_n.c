#include <stdio.h>
// Nama File : bilangan_sempurna_n.c 
// Deskripsi : Menampilkan bilangan sempurna sampai ke-n.
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main () {
  //Kamus
  int n;
  int total;

printf("Masukan Nilai n: ");
scanf("%d", &n);
  
  
  //Algoritma
  if (n > 0 ) {
    for (int i = 1; i < n; i ++) {
      total = 0;
      for (int j = 1; j < i; j ++) {
        if (i % j == 0) {
          total += j;
        } else  {
          continue;
        }
      } 
      if (total == i) {
        printf("\n%d", i);
      } else {
        continue;
      }
    }
  } else {
    printf("Tidak ada bilangan sempurna");
  }

  return 0;

}

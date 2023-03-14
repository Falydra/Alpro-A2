#include <stdio.h>
// Nama File : bilangan_prima.c 
// Deskripsi : Mengidentifikasi jenis suatu bilangan yang mana bilangan tersebut adalah bilangan prima atau lainnya.
// Pembuat  : Daffa Aly Meganendra - 24060122140140

int main () {

  //Kamus
  int N, isPrime = 1;

  printf("Masukan input N: ");
  scanf("%d", &N);
    
    
    
  //Algoritma
  if (N <= 1) {
    isPrime = 0;
  }

  for (int i = 1; i <= N / 2; i++) {
    if (N % i == 0) {
      isPrime = 0;
    }
  }

  if (isPrime) {
    printf("Bilangan prima\n");
  } else {
    printf("Bukan bilangan prima\n");

  }

  return 0;
}
    return 0;




}

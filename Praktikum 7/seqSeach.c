#include <stdio.h>


/*Nama File :  seqSearch.c*/
/*Nama Pembuat : Daffa Aly M */
/*Tanggal : 10 Mei 2022 */
/*Deskripsi : Menampilkan data yang dicari dengan kata kunci tertentu dengan metode sekuens */

int main () {
    //Kamus Lokal
  int x[] = {1, 3, 4, 6, 10};
  int outpt;

    //Algoritma
  int key = 4;
  int i = 0;


  while (i < 5 && x[i] < key) {
    i++;
      if (x[i] == key) {
      outpt = i;
      } else {
      outpt = 0;
      }
  }
  
printf("%d", outpt);
}

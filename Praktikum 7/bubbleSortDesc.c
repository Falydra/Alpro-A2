#include <stdio.h>

/*Nama File :  bubbleSortDesc.c*/
/*Nama Pembuat : Daffa Aly M */
/*Tanggal : 10 Mei 2022 */
/*Deskripsi : Menampilkan array yang sudah diurutkan dari yang terbesar*/

void descending(int arr[], int n) {
    //Kamus Lokal
    int i, j, temp;


    //Algoritma
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    //Kamus Lok
    int arr[] = { 5, 2, 8, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);


    //Algoritma
    printf("Sebelum Sorted: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    descending(arr, n);
    printf("Sorted: ");


    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

#include <stdio.h>

/*Nama File :  bubbleSortAsc.c*/
/*Nama Pembuat : Daffa Aly M */
/*Tanggal : 10 Mei 2022 */
/*Deskripsi : Menampilkan array yang sudah diurutkan dari yang terkecil */



void bubble_sort(int arr[], int n) {
    //Kamus Lokal
    int i, j, temp;

    //Algoritma
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 5, 2, 8, 3, 1 };

    printf("Sebelum Sorted: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }


    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    printf("\nSorted: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

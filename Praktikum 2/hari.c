#include <stdio.h>

int main () {
    int h;

printf("Masukan Nomor Hari: ");
scanf("%d", &h);

    if (h == 1) {
        printf("Hari Senin");
    } else if (h == 2) {
        printf("Hari Selasa");
    } else if (h == 3){
        printf("Hari Rabu");
    } else if (h == 4) {
        printf("Hari Kamis");
    } else if (h == 5) {
        printf("Hari Jum'at");
    } else if (h == 6) {
        printf("Hari Sabtu");
    } else if (h == 7) {
        printf("Hari Minggu");
    } else {
        printf("Masukan nomor hari tidak tepat");
    }
    
}
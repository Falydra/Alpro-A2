#include <stdio.h>


int main (void) {

    int i;

    printf("Masukan Nilai: ");
    scanf("%d", &i);

if ((i >= 80) && (i <= 100)) {
    printf("A");
} else if ((i >= 70) && (i < 80)) {
    printf("B");
} else if ((i > 59) && (i < 70)) {
    printf("C");
} else if ((i > 49) && (i < 60)) {
    printf("D");
} else {
    printf("E");
}
}
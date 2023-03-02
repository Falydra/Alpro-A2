#include <stdio.h>

int main () {
    int t1,t2,t3, total;

printf("Masukan nilai t1: ");
scanf("%d", &t1);

printf("Masukan nilai t2: ");
scanf("%d", &t2);

printf("Masukan nilai t3: ");
scanf("%d", &t3);

total = t1 + t2 + t3;

if ((t1 < 0) || (t2 < 0) || (t3 < 0) ){
    printf("Masukan tahanan tidak boleh negatif");
} else {
    printf("%d", total);
}
}
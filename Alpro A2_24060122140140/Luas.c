#include <stdio.h>

int main() {

    int s1;
    int s2;
    int d1;
    int d2;
    float Keliling;
    float Luas;

    printf("Masukan input s1: ");
    scanf("%d", &s1);

    printf("Masukan input s2: ");
    scanf("%d", &s2);

    printf("Masukan input d1: ");
    scanf("%d", &d1);

     printf("Masukan input d2: ");
    scanf("%d", &d2);

    Keliling = 2*(s1 + s2);

    Luas = 0.5 * d1 *d2;

    printf("%f\n", Keliling);
    printf("%f", Luas);


}
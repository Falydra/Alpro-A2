#include <stdio.h>

int main () {
    int r;
    int vb;
    int vk;
    const double phi = 3.14;

    printf("Masukan input r: ");
    scanf("%d", &r);

    vb = 4*(phi*r*r*r) /3;
    vk = 0.5 *vb;

    printf("%d\n", vb);
    printf("%d", vk);


}
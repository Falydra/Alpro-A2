#include <stdio.h>

int main() {
    int m;
    int v;
    int r;
    int f;

    printf("Masukan input m: ");
    scanf("%d", &m);

    printf("Masukan input v: ");
    scanf("%d", &v);

    printf("Masukan input r: ");
    scanf("%d", &r);

    f = m*(v*v/r);

    printf("%d", f);
    

}
#include <stdio.h>

int main() {
    int vo;
    int t;
    const double g = 10;
    double x = 0.5;
    int y;


    printf("Masukan input vo: ");
    scanf("%d", &vo);

    printf("Masukan input t: ");
    scanf("%d", &t);


    y  = vo*t - x*(g*t*t) ;

printf("%d", y);
}
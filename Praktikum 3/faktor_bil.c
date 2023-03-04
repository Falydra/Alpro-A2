#include <stdio.h>


int main (void) {

    int N;


    printf("Masukan input N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d\n", i);
        } else {
            continue;
        }
    }

    
}
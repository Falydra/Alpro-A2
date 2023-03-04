#include <stdio.h>

int main (void) {
    
    int n, total = 0;
    printf("Input n : ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        printf("%d ", i);
        total += i;
    }

    printf("Total : %d", total);

    return 0;
}
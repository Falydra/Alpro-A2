#include <stdio.h>


int main() {
  int n; // 14
  int isPrime;

  printf("N : ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Bilangan harus positif");
    return -1;
  }

  for (int i = 2; i <= n; i++) {
    isPrime = 1;

    for (int j = 2; j < i / 2; j++) {
      if (i % j == 0) {
        isPrime = 0;
      }
    }

    if (isPrime) {
      printf("%d\n", i);
    }
  }

  return 0;
}

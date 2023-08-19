#include<stdio.h>

#include<math.h>

int ktra1(long i) {
  for (int j = 2; j <= sqrt(i); j++) {
    if (i % j == 0) return 0;
  }
  return 1;
}
int ktra2(long i) {
  long m = i, a[100];
  int demso = 0;
  while (m > 0) {
    demso++;
    m /= 10;
  }
  for (int j = demso; j >= 1; j--) {
    a[j] = i % 10;
    i /= 10;
  }
  for (int j = 1; j <= demso; j++) {
    if (a[j] != a[demso + 1 - j]) {
      return 0;
    }
  }
  return 1;
}
int main() {
  int t;
  scanf("%d", & t);
  while (t--) {
    long a, b, k = 0;
    scanf("%ld%ld", & a, & b);
    for (long i = a; i <= b; i++) {
      if (ktra1(i) == 1 && ktra2(i) == 1) {
        k++;
        printf("%d ", i);
        if (k % 10 == 0) printf("\n");
      }
    }
    printf("\n");
  }
  return 0;
}

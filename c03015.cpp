#include<stdio.h>
#include<math.h>

int main() {
  int t;
  scanf("%d", & t);
  while (t--) {
    long long n;
    scanf("%lld", & n);
    long long max;
    for (long long i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        while (n % i == 0) {
          max = i;
          n = n / i;
        }
      }
    }
    if (n != 1) {
      max = n;
    }
    printf("%lld", max);
    printf("\n");
  }
}

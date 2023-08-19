#include<stdio.h>

#include<math.h>

int check(int n) {
  if (n < 2) return 0;
  else {
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        return 0;
      }
    }
    return 1;
  }
}
int main() {
  int A[105];
  int n;
  scanf("%d", & n);
  for (int i = 0; i < n; i++) {
    scanf("%d", & A[i]);
  }
  int dem = 0;
  for (int i = 0; i < n; i++) {
    if (check(A[i])) {
      ++dem;
    }
  }
  printf("%d ", dem);
  for (int i = 0; i < n; i++) {
    if (check(A[i])) {
      printf("%d ", A[i]);
    }
  }
}

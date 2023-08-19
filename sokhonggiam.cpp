
#include<stdio.h>
#include<string.h>

int main() {
  int t;
  scanf("%d", & t);
  while (t--) {
    char c[20];
    scanf("%s", & c);
    int ok = 0;
    for (int i = 0; i < strlen(c); i++) {
      for (int j = i + 1; j < strlen(c); j++) {
        if (c[i] > c[j]) ok = 1;
      }
    }
    if (ok == 0) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}

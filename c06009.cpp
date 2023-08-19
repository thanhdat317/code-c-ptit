#include <stdio.h>

#include <string.h>

#include <ctype.h>

int check(char a[]) {
  int l = strlen(a);
  if (a[0] == a[1] && a[1] == a[2] && a[3] == a[4])
    return 1;
  int check1 = 1;
  for (int i = 0; i < l; i++) {
    if (a[i] != '6' && a[i] != '8') {
      check1 = 0;
      break;
    }
  }
  if (check1)
    return 1;
  int check = 1;
  for (int i = 0; i < l; i++) {
    for (int j = i + 1; j < l; j++) {
      if (a[i] >= a[j]) {
        check = 0;
        break;
      }
    }
  }
  if (check)
    return 1;
  return 0;
}
int main() {
  int t;
  scanf("%d", & t);
  while (t--) {
    scanf("\n");
    char a[101];
    gets(a);
    char m[100][100];
    int cnt = 0;
    char * token = strtok(a, " ");
    while (token != NULL) {
      strcpy(m[cnt++], token);
      token = strtok(NULL, " ");
    }
    strcpy(a, m[1]);
    char * ttoken = strtok(a, ".");
    strcpy(m[++cnt], ttoken);
    strcpy(a, m[cnt]);
    ttoken = strtok(NULL, ".");
    strcpy(m[++cnt], ttoken);
    strcat(a, m[cnt]);
    int ktra = check(a);
    if (ktra)
      printf("YES\n");
    else printf("NO\n");
  }
}

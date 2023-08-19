#include<stdio.h>

int main() {
  int cr, cd;
  scanf("%d%d", & cr, & cd);
  for (int i = 1; i <= cd; i++) {
    for (int j = 1; j <= cr; j++) {
      if (i == 1 || i == cd || j == 1 || j == cr) {
        printf("*");
      } else printf(" ");
    }
    printf("\n\n");
  }
}

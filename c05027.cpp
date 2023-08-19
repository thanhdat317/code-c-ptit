#include <stdio.h>
#include<math.h>
int main() {
  int n;
  scanf("%d", &n);
  int min1= 1e9;
  int min2= 1e9;
  int a[201], b[202];
  for(int i = 0 ; i< n ; i++){
  	scanf("%d %d",&a[i], &b[i]);
  	min1= fmin(a[i],min1);
  	min2 = fmin(b[i],min2);
  }
  printf("%lld\n",1ll*min1 *min2);
}

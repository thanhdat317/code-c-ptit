#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i = 1 ; i< 2*n; i++){
		for(int j = 1 ; j< 2*n ; j++){
			int tmp = fmin(fmin(i-1,n-i),fmin(j-1,n-j));
			a[i][j]= n-tmp;
		}
	}
	for(int i = 1 ; i< 2*n; i++){
		for(int j = 1 ; j< 2*n ; j++){
			printf("%d",a[i][j]);
					}
		printf("\n");
	}
}

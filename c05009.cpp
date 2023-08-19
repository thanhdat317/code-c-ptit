#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i = 0 ; i< n ; i++){
		for(int j = 0 ; j< n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0 ; i< n; i++){
			int tmp = a[i][i];
			a[i][i] = a[i][n-1-i];
			a[i][n-1-i] =tmp;
		}
	for(int i = 0 ; i< n ; i++){
		for(int j = 0 ; j< n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}


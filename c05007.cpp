#include<stdio.h>
#include<math.h>

int main(){
	int  m,n;
	scanf("%d %d", &m, &n);
	int a[m][n];
	for(int i = 0 ; i< m ; i++){
		for(int j = 0 ; j< n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int x,y;
	scanf("%d %d", &x, &y);
	--x;--y;
	for(int i = 0 ; i< m ; i++){
			int tmp = a[i][x];
			a[i][x] = a[i][y];
			a[i][y] = tmp;
		}
	for(int i = 0 ; i< m ; i++){
		for(int j = 0 ; j< n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

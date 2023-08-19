#include<math.h>
#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m,k;
		scanf("%d %d %d", &n ,&m, &k);
		k--;
		int a[n][m];
		for(int i = 0 ; i< n ; i++){
			for(int j = 0 ; j< m; j++){
			scanf("%d", &a[i][j]);	
			}
		}
		for(int i = 0 ; i< n ; i++){
			for(int j = i+1 ; j< n ; j++){
				if(a[i][k] > a[j][k]){
					int tmp =a[i][k];
					a[i][k]=a[j][k];
					a[j][k]= tmp;
				}
			}
		}
		for(int i = 0 ; i< n ; i++){
			for(int j = 0 ; j<m; j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
}
}

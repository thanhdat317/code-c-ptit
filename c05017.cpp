#include<stdio.h>
#include<math.h>


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,m;
		scanf("%d %d", &n, &m);
		int a[n][m];
		for(int i = 0 ; i< n ; i++){
			for(int j = 0 ; j<m ; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int c1 =0, c2= m-1, h1=0, h2= n-1;
		int dem =0;
		while(dem<n*m){
		for(int i =c1; i<=c2; i++){
			printf("%d ",a[h1][i]);
			dem++;
		}
		h1++;
		for(int i = h1; i<=h2; i++){
			printf("%d ",a[i][c2]);
			dem++;
		}
		c2--;
		if(h1<=h2){
		for(int i = c2; i>=c1; i--){
			printf("%d ",a[h2][i]);
			dem++;
		}
	}
		h2--;
		if(c1<=c2){
		for(int i = h2; i>=h1 ;i--){
			printf("%d ",a[i][c1]);
			dem++;
		}
		c1++;
	}
}
	printf("\n");
}
}

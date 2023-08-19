#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int k =1; k<=t; k++){
	int n;
	scanf("%d", &n);
	int c1=0,c2=n-1,h1=0,h2=n-1;
	int dem =n*n;
	int a[n][n];
	while(dem>=1){
		for(int i = c1; i<=c2 ; i++){
			a[h1][i]=dem--;
		}
		h1++;
		for(int i= h1; i<=h2; i++){
			a[i][c2]=dem--;
		}
		c2--;
		for(int i = c2; i>=c1; i--){
			a[h2][i]=dem--;
		}
		h2--;
		for(int i= h2; i>=h1; i--){
			a[i][c1]= dem--;
		}
		c1++;
	}
	printf("Test %d:\n",k);
	for(int i = 0 ; i< n ; i++){
		for(int j = 0; j< n ; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
}

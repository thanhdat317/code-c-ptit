#include<stdio.h>
#include<math.h>
#define ll long long
ll F[100];
void fibo(){
	F[1] = 0, F[2] = 1;
	for(int i = 3; i<=92; i++){
		F[i]= F[i-1]+F[i-2];
	}
}
int main(){
	fibo();
	int n;
	scanf("%d", &n);
	int c1=0,c2=n-1,h1=0,h2=n-1;
	int dem =1;
	int a[n][n];
	while(dem<=n*n){
		for(int i = c1; i<=c2 ; i++){
			a[h1][i]=F[dem++];
		}
		h1++;
		for(int i= h1; i<=h2; i++){
			a[i][c2]=F[dem++];
		}
		c2--;
		for(int i = c2; i>=c1; i--){
			a[h2][i]=F[dem++];
		}
		h2--;
		for(int i= h2; i>=h1; i--){
			a[i][c1]= F[dem++];
		}
		c1++;
	}
	for(int i = 0 ; i< n ; i++){
		for(int j = 0; j< n ; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>

int main(){
	int A[105];
	int n;
	scanf("%d", &n);
	for(int i =0 ; i< n; i++){
		scanf("%d", &A[i]);
	}
	int t; scanf("%d",&t);
	for(int i =t ; i < n;i++ ){
		printf("%d ", A[i]);
	}
	for(int i = 0 ; i<t; i++ ){
		printf("%d ",A[i]);
	}
}

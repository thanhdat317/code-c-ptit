#include<stdio.h>

int main(){
	int A[101], B[101];
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 0 ; i< a; i++){
		scanf("%d", &A[i]);
	}
	for(int i = 0; i< b; i++){
		scanf("%d",&B[i]);
	}
	int t;
	scanf("%d", &t);
	for(int i = 0 ; i<t; i++){
		printf("%d ", A[i]);
	}
	for(int i = 0; i<b; i++){
		printf("%d ", B[i]);
	}
	for(int i = t; i<a; i++){
		printf("%d ",A[i]);
	}
}

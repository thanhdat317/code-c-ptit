#include<stdio.h>

int main(){
	int A[101], B[101];
	int t;
	scanf("%d",&t);
	for(int i =1; i<=t ;i++){
	int a, b,t;
	scanf("%d %d %d", &a, &b,&t);
	for(int i = 0 ; i< a; i++){
		scanf("%d", &A[i]);
	}
	for(int i = 0; i< b; i++){
		scanf("%d",&B[i]);
	}
	printf("Test %d:\n", i);
	for(int i = 0 ; i<t; i++){
		printf("%d ", A[i]);
	}
	for(int i = 0; i<b; i++){
		printf("%d ", B[i]);
	}
	for(int i = t; i<a; i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	}
}

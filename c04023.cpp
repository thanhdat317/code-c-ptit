#include<stdio.h>

int main(){
	int A[105];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i< n; i++){
		scanf("%d", &A[i]);
	}
	int max = 1;
	for(int i = 0 ; i< n ; i++){
		for(int j = i+1; j< n; j++){
			if(A[i]>A[j]){
				int temp = A[i];
				A[i]= A[j];
				A[j]= temp;
			}
		}
	}
	for(int i = 0 ; i< n; i++){
		printf("%d ", A[i]);
	}
}
		

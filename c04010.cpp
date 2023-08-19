#include<stdio.h>

int main(){
	int A[101];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}
	int min1 = 1e9, min2= 1e9;
	for(int i = 0 ; i< n; i++){
		if(A[i]<min1){
			min2 = min1;
			min1= A[i];
		}else if(A[i]<min2 && A[i]!= min1){
			min2 = A[i];
		}
	}
	printf("%d %d", min1, min2);
}

#include<stdio.h>

int main(){
int A[105];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i < n; i++){
		scanf("%d", &A[i]);
	}
	for(int i = 0 ; i< n-1; i++){
		for(int j = i+1; j< n; j++){
			if(A[i]> A[j]){
				int temp = A[ i];
				A[i]= A[j];
				A[j]= temp;
			}
		}
		printf("Buoc %d: ",i+1);
		for(int i = 0 ; i< n; i++){
			printf("%d ", A[i]);
		}
		printf("\n");
	}
}

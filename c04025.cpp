#include<stdio.h>
int check(int n){
	if(n % 2==0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int A[105];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i < n; i++){
		scanf("%d", &A[i]);
	}
	for(int i = 0 ; i< n ; i++){
			for(int j = i+1 ; j < n; j++){
				if(A[i]>A[j]){
					int temp = A[i];
					A[i]= A[j];
					A[j]= temp;
				}
			}
}
		for(int i = 0 ; i< n; i++){
			if(check(A[i])) printf("%d ", A[i]);
		}
			for(int i = 0 ; i< n; i++){
			if(check(A[i])==0) printf("%d ", A[i]);
		}
}
	

#include<stdio.h>

int main(){
	int A[101];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i< n; i++){
		scanf("%d", &A[i]);
	}
	for(int i =0; i< n; i++){
		int check = 1;
		for(int j = 0; j < i ; j++){
			if(A[i]== A[j]){
				check = 0;
			}
		}
		int count = 1;
		if(check){
			for(int j =i+1; j< n; j++){
				if(A[j]==A[i]){
					++count;
				}
			}
		
	} 
	if(count>1) printf("%d ", A[i]);
	}
}

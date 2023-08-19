#include<stdio.h>

int main(){
	int t, A[40];
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 0 ; i< n; i++){
			scanf("%d", &A[i]);
		}
		int dem= 0;
		for(int i =0 ; i<n ;i++){
			if(A[i]==A[i+1]){
				++dem;
			}
		}
		printf("%d\n",dem);
	}
	}

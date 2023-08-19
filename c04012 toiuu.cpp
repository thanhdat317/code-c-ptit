#include<stdio.h>
int count[10000001];
int main(){
	int A[101];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i< n; i++){
		scanf("%d", &A[i]);
	}
	for(int i =0; i< n; i++){
		count[A[i]]++;
	}
	for(int i =0 ; i<n; i++){
		if(count[A[i]] >= 2){
			printf("%d", A[i]);
			count[A[i]]=0;
		}
	}
}

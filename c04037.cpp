#include<stdio.h>
int cnt[1000001];
int main(){
	int n, max= -1e9;
	int A[105];
	scanf("%d", &n);
	for(int i = 0; i< n ;i++){
		scanf("%d", &A[i]);
		if(A[i]>max) max = A[i];
	}
	for(int i = 1; i< n; i++){
		cnt[A[i]]++;
	}
	int dem = 0;
	for(int i =0 ; i<= max; i++){
		if(cnt[i] >= 2){
			++dem;
		}
	}
	printf("%d\n", dem);
	for(int i =0 ; i< n; i++){
		if(cnt[A[i]] >= 2){
			printf("%d ",A[i]);
			cnt[A[i]]= 0;
		}
	}
}

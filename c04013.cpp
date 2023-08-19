#include<stdio.h>
int cnt[1000001];
int main(){
	int A[101];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i< n; i++){
		scanf("%d", &A[i]);
	}
	for(int i = 0 ; i<n ; i++){
		cnt[A[i]]++;
	}
	int dem =0;
	for(int i =0 ;i< n; i++){
		if(cnt[A[i]]==1){
			++dem;
		}
	}
	printf("%d\n",dem);
	for(int i =0 ;i< n; i++){
		if(cnt[A[i]]==1){
			printf("%d ", A[i]);
		}
	}
	
}

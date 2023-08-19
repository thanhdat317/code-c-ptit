#include<stdio.h>
int cnt[1000001];
int main(){
	int A[105];
	int t;
	scanf("%d", &t);
	while(t--){
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i < n; i++){
		scanf("%d", &A[i]);
	}
	for(int i = 0 ; i< n; i++){
		cnt[A[i]]++;
	}
	int max = 0;
	for(int i = 0 ; i< n ; i++){
		if(cnt[A[i]]> max){
			max= cnt[A[i]];
		}
	}
	for(int i = 0 ; i< n ; i++){
		if(cnt[A[i]]== max){
			printf("%d ", A[i]);
			cnt[A[i]]= 0;
		}
	}
	printf("\n");
	for(int i = 0 ; i< n ; i++){
		cnt[A[i]]= 0;
	}
}
}

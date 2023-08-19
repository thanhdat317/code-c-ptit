#include<stdio.h>
int cnt[1000001];
int main(){
	int A[101];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i< n; i++){
		scanf("%d", &A[i]);
	}
	for(int i =0;i < n; i++){
		cnt[A[i]]++;
	}
	for(int i = 0 ; i< n; i++ ){
		if(cnt[A[i]] !=0){
			printf("%d %d\n", A[i],cnt[A[i]]);
			cnt[A[i]] = 0 ;
		}
	}

}

#include<stdio.h>
int cnt[10001];
int main(){
	int A[105];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i< n ; i++){
		scanf("%d",&A[i]);
	}
	for(int i = 0 ; i< n ; i++){
		if(cnt[A[i]]== 0){
			printf("%d ",A[i]);
			cnt[A[i]]=1;
		}
	}
}

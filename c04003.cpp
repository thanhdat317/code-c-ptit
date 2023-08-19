#include<stdio.h>
int doixung(int A[], int n){
	int l =0 , r= n-1;
	while(l <= r){
		if(A[l]!= A[r]){
			return 0;
		}
		l++,r--;
	}
	return 1;
}
int main(){
	int A[101];
	int t;
	scanf("%d",&t);
	while(t--){
		long n;
		scanf("%ld", &n);
		for(long i =0; i< n; i++){
			scanf("%d", &A[i]);
		}
		if(doixung(A,n)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}


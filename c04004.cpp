#include<stdio.h>

int main(){
	long long A[100];
	A[1]=1, A[2]=1;
	for(int  i = 3; i <= 92; i++){
		A[i]=A[i-1]+A[i-2];
	}
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%lld\n",A[n]);
	}
}

#include<stdio.h>

int fibo(long long n){
	long long A[100];
	A[0]= 0; A[1]= 1;
	for(int i = 2; i<= 93; i++){
		A[i]= A[i-1]+ A[i-2];
		if(n == A[i]){
			return 1;
		}
	}
	return 0;
}
int main(){
	long long n;
	scanf("%lld", &n);
	if(fibo(n)){
		printf("1");
	}else{
		printf("0");
	}
}

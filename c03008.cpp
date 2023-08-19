#include<stdio.h>
#include<math.h>
int check(int n){
	long long sum = 0;
	for(long long i = 1; i<=sqrt(n); i++){
		if(n % i == 0 ){
			long long  j = n/i;
			if(i == j){
				sum= sum+i;
			}else{
				sum= sum+i+j;
			}
		}
	}
	sum = sum-n;
	if(n == sum){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	long long n;
	scanf("%lld", &n);
	for(long i = 1; i <= n; i++){
		if(check(i)){
			printf("%lld ", i);
		}
	}
}

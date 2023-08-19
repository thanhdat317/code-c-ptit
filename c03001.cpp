#include<stdio.h>

long  check(int n){
	long long sum = 0;
	while(n > 0){
		long d = n %10;
		 sum+=d;
		n /= 10;
	}
	if(sum %10 ==0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long n;
		scanf("%ld", &n);
		if(check(n)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}

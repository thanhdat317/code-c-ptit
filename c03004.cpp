#include<stdio.h>

int ucln(long long a,long long b){
	if(a==0|| b==0){
		return a+b;
	}
	while(a != b){
		if(a > b){
			a=a-b;
		}else{
		 b = b-a;
		}
	}
	return a;
}
 
int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long long  k = ucln(a,b);
	printf("%lld\n", k); 
	printf("%lld\n", (long long)(a * b)/k);
}

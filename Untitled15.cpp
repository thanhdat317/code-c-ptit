#include<stdio.h>

int main(){
	long long n,t,s=0,temp;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		while(n !=0){
			temp=n%10;
			s+=temp;
			n /=10;
		}
	}
	printf("%lld",s);
}

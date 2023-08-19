#include<stdio.h>

int main(){
	long long n,dem,s=0;
	scanf("%lld\d",&n);
	while(n!=0){
		dem = n%10;
		s+=dem;
		n/=10;
	}
	printf("%lld",s);
}

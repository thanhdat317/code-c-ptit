#include<stdio.h>
#include<math.h>
int main(){
	long long t,n;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
	long long x=sqrt(n);
		if(x*x==n){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}

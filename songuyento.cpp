#include<stdio.h>
#include<math.h>
int main(){
	long long n,t,i;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		if(n<2){
			printf("NO");
		}else{
		int count=0;
		for( i=2;i<=sqrt(n);i++){
			if(n%i==0){
				count++;
			}
			}
		if(count==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
}

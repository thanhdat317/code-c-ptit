#include<stdio.h>
#include<math.h>

#define ll long long

ll fibo(ll n){
	ll a[93];
	a[0]=0, a[1]=1;
	if(n==a[0]|| n==a[1]){
		return 1;
	}
	for(int i = 2 ; i<=92; i++){
		a[i]=a[i-1]+a[i-2];
         if(a[i]==n){
         	return 1;
		 } 
		}
		return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		if(fibo(n)==1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}

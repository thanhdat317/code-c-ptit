#include<stdio.h>
#include<math.h>
#define ll long long
ll gcd(ll a, ll b){
	if(b==0){
		return a;
	}else{
		return gcd(b, a%b);
	}
}
ll lcm(ll a, ll b){
	return a /gcd(a,b)*b;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ll a, b;
		scanf("%lld %lld", &a, &b);
		ll bc = a;
		for(ll i = a+1; i<=b; i++){
			 bc = lcm(bc,i);
		}
		printf("%lld\n",bc);
	}
}

#include<stdio.h>
#include<math.h>
#define ll long long
ll gcd(ll a, ll b){
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}
ll lcm(ll a, ll b){
	return (a*b)/gcd(a,b);
}
int main(){
	int t ;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		ll ans = 1;
		for(ll i = 2 ; i<=n ; i++){
			ans = 1ll*lcm(ans,i);
		}
		printf("%lld\n",ans);
	}
}

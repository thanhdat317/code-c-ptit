#include<stdio.h>
#include<math.h>
#define ll long long
long long uocnt(ll n){
	ll res ;
	for(int i = 2 ; i<=sqrt(n); i++){
		while(n %i==0){
			res =i;
			n/=i;
		}
	}
	if(n != 1){
		res = n;
		return res;
}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		printf("%lld\n",uocnt(n));
	}
}

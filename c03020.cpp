#include<stdio.h>
#include<math.h>
#define ll long long
ll tn(ll n){
	ll tmp = n, res =0;
	while(n != 0){
		res = res *10+n%10;
		n/=10;
	}
	if(res==tmp){
		return 1;
	}else{
		return 0;
	}
}
ll check(ll n){
	while(n != 0){
		int t = n %10;
		if(t ==6){
			return 1;
		}
		n/=10;
	}
	return 0;
}
ll tongcs(ll n){
	int sum = 0;
	while(n != 0){
		sum += n %10;
		n/=10;
	}
	int t = (int)(sum % 10);
	if(t==8){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	ll a,b;
	scanf("%lld %lld", &a, &b);
	int cnt = 0;
	if(a<b){
	for(ll i = a; i<=b; i++){
		if(check(i)==1 && tongcs(i)==1 && tn(i)==1){
			printf("%lld ",i);
		}
	}
}else{
	for(ll i = b; i<=a; i++){
		if(check(i)==1 && tongcs(i)==1 && tn(i)==1){
			printf("%lld ",i);
		}
	}
}
}


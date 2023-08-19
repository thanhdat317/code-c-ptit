#include<stdio.h>

long long tn(long long n){
	long long res= 0, temp =n;
	while( n != 0){
		res= res *10+ n %10;
		n/=10;
	}
	if(res== temp){
		return 1;
	}else{
		return 0;
	}
}
long long sum(long long n){
	long long t;
	long long sum= 0;
	while(n > 0){
		t= n %10;
		sum+=t;
		n/=10;
	}
	if(sum % 2==1){
		return 1;
	}else{
		return 0;
	}
}
long long tach(long long n){
	long long t;
	while(n>0){
		t = n %10;
		if(t % 2==0){
			return 0;
			break;
		}
		n /=10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(tn(n) && tach(n) && sum(n)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}

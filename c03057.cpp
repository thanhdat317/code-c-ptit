#include<stdio.h>
#include<math.h>
long long min(long long n){
	long long ans =n;
	int count= 0;
	while(n !=0){
		if(n %10 == 6){
			ans-=(long long) pow(10,count);
		}
		n /=10;
		++count;
	}
	return ans;
}
long long max(int n){
	long long ans =n;
	int count= 0;
	while(n !=0){
		if(n %10 == 5){
			ans+=(long long) pow(10,count);
		}
		n /=10;
		++count;
	}
	return ans;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld %lld",&a, &b);
		printf("%lld %lld\n",min(a)+min(b),max(a)+max(b));
	}
	return 0;
}


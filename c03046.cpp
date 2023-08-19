#include<stdio.h>
#include<math.h>
long long tn(long long n){
	long long res = 0 , temp =n;
	while(n !=0){
		res = res*10 + n%10;
		n/=10;
	}
	if(res==temp){
		return 1;
	}else{
		return  0;
	}
}
long long tcs(long long n){
	long long sum =0;
	while(n>0){
		long long t= n %10;
		sum+=t;
		n/=10;
	}
	return sum;
}
long long loai(long long n){
		while(n>0){
			int t= n %10;
			if(t==4){
				return 0;
				break;
			}
			n/=10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		for(int i = pow(10,n-1); i<=pow(10,n); i++){
			if(tn(i) && tcs(i)%10==0 && loai(i)){
				printf("%lld ",i);
			}
		}
		printf("\n");
	}
}

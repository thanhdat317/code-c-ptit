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
ll tongcs(ll n){
	int sum = 0;
	while(n != 0){
		sum += n %10;
		n/=10;
	}
	return sum;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d", &n);
		int cnt = 0;
		if(n==1){
			printf("0");
		}else if(n==2){
		for(ll i = 10; i< 99; i++){
			if(tn(i)==1 && tongcs(i)%10==0){
				cnt++;
			}
		}
	}else if(n==3){
		for(ll i = 100; i< 1000; i++){
			if(tn(i)==1 && tongcs(i)%10==0){
				cnt++;
			}
		}
	}else if(n==4){
		for(ll i = 1000; i< 10000; i++){
			if(tn(i)==1 && tongcs(i)%10==0){
				cnt++;
			}
		}
	}else if(n==5){
		for(ll i = 10000; i< 100000; i++){
			if(tn(i)==1 && tongcs(i)%10==0){
				cnt++;
			}
		}
	}else if(n==6){
		for(ll i = 100000; i< 1000000; i++){
			if(tn(i)==1 && tongcs(i)%10==0){
				cnt++;
			}
		}
	}else if(n==7){
		for(ll i = 1000000; i<10000000; i++){
			if(tn(i)==1 && tongcs(i)%10==0){
				cnt++;
			}
		}
	}else if(n==8){
		for(ll i = 10000000; i< 100000000; i++){
			if(tn(i)==1 && tongcs(i)%10==0){
				cnt++;
			}
		}
	}else if(n==9){
		for(ll i = 100000000; i< 1000000000; i++){
			if(tn(i)==1 && tongcs(i)%10==0){
				cnt++;
			}
		}
	}
	printf("%d\n",cnt);
}
}


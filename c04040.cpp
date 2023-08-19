#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		for(int i =0 ; i< n ; i++){
			scanf("%d", &a[i]);
		}
		ll  max =a[0], sum =a[0];
		for(int i = 1 ; i< n; i++){
			if(a[i]>=sum+a[i]){
				sum =a[i];
			}else{
				sum +=a[i];	
		  }
		  max = fmax(max, sum);
		}
		printf("%lld\n",max);
	}
}

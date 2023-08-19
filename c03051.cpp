#include<stdio.h>
#include<math.h>
int prime[100001]; 
void check(){
	for(int i =0; i<=100000; i++){
		prime[i]=1;
	}
	prime[0]=prime[1]= 0;
	for(int i = 2; i<=sqrt(100000); i++){
		if(prime[i]==1){
			for(int j = i *i; j<= 100000; j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	check();
	int t;
	scanf("%d",&t);
	while(t--){
		long long l,r;
		scanf("%lld%lld",&l, &r);
		long long c1= sqrt(l), c2= sqrt(r);
		if( c1 *c1 != l ) ++c1;
		int dem=0;
		 for(int i = c1; i <= c2; i++){
		 	if(prime[i]){
		 		++dem;
			 }
		 }
		 printf("%d\n", dem);
}
}

#include<stdio.h>
#include<math.h>
int check(int n){
	long res=1;
	for(int i =2; i<=sqrt(n); i++){
		if(n %i == 0){
			res *=i;
			while(n %i==0){
				n = n/i;
			}
		}
	}
	if(n>1) res*= n;
	return res;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long  n;
		scanf("%ld", &n);
		printf("%ld\n",check(n));
	}
	return 0;
}

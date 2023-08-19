#include<stdio.h>
#include<math.h>
int check(int n){
	int sum=0;
	for(int i = 1; i<= sqrt(n); i++){
		if( n % i ==0){
			int j = n/ i;
			if(i == j){
				sum+=i;
			}else{
				sum= sum + i+ j;
			}
		}
	}
	sum = sum-n;
	if( n == sum){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a<b){
	for(int i = a; i<= b; i++){
		if(check(i)){
			printf("%d ",i);
		}
	}
}else{
	for(int i = b; i<= a; i++){
		if(check(i)){
			printf("%d ", i);
		}
	}
}
	
}

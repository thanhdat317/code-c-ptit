#include<stdio.h>

int main(){
	int n, A[100],sum = 0;
	scanf("%d",& n);
	for( int i= 1 ; i < n; i++){
		if(n % i ==0){
			sum +=i;
		}
	}
	if( sum == n){
		printf("1\n");
	}else{
		printf("0\n");
	}
	return 0;
}

#include<stdio.h>

int main(){
	int n , t;
	scanf("%d", &n);
	int count = 0;
	while( n >0){
		t =  n % 10;
		n = n / 10 ;
		count ++;
	}
	printf("%d",count);
	return 0;
}


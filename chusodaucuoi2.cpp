#include<stdio.h>

int main(){
	int n, t, a;
	scanf("%d", &n);
	a = n % 10;
	while(  n >= 10){
	 n = n / 10;
	}
	printf("%d %d",n,a);
}

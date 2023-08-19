#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[1000];
	int i =0;
	if(n==0){
		printf("0");
	}
	while(n != 0){
		a[i]= (int)n % 2;
		n = n/2;
		i++;
	}
	for(int  j = i-1 ; j>=0; j--){
		printf("%d",a[j]);
	}
}

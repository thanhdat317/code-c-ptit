#include<stdio.h>

int ucln(long a, long b){
	if(a==0 || b ==0){
		return a+b;
	}
	while(a != b){
		if( a> b){
			a=  a - b;
		}else{
			b = b-a;
		}
	}
	return a;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	long a, b;
	scanf("%ld %ld", &a, &b);
	printf("%ld %ld", (a * b)/ ucln(a, b), ucln(a, b));
	printf("\n");
}
}

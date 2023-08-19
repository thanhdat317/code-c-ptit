#include<stdio.h>

int main(){
	int a, b, sum = 0 ;
	scanf("%d%d", &a, &b);
	if(a > b){
		int tg = a;
		a = b;
		b = tg;
	}
	for(int i = a; i <= b; i++){
		sum+=i;
	}
	printf("%d",sum);
}

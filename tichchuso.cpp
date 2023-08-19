#include<stdio.h>

int main(){
	int n, t, tich =1;
	scanf("%d", &n);
	while(n > 0){
		t = n % 10;
		tich *= t;
		n=n/10;
	}
	printf("%d",tich);
}


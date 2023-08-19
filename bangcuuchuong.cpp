#include<stdio.h>

int main(){
	int n, S,i;
	scanf("%d",&n);
	printf("%d",n);
	for(i=2;i<=10;i++){
		S=n*i;
		printf(" %d",S);
	}
	return 0;
}

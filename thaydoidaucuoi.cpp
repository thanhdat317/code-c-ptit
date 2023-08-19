#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int A[100];
	int i = 0;
	while( n > 0){
		A[i] = n % 10;
		n = n / 10 ;
		i++;
	}
	if(A[0] != 0){
		printf("%d", A[0]);
	}
	for(int j = i-2; j >= 1; j--){
		printf("%d",A[j]);
	}
	printf("%d", A[i-1]);
	return 0;
}


#include<stdio.h>

int main(){
	int n, A[10005], sum = 0;
	scanf("%d",&n);
	for(int i = 0 ; i< n; i++){
		scanf("%d", &A[i]);
	}
	for(int i =0; i< n; i++){
		sum += A[i];
	}
	printf("%.3lf\n",(double)sum/n);
}

#include<stdio.h>
int A[10000000];
int main(){
	int n;
	scanf("%d",&n);
	int i = 0;
	while( n > 0){
	 A[i]= n %10;
	 n = n/10 ;
	 i++;
	}
	printf ("%d %d",A[i-1],A[0]);
	return 0;
}

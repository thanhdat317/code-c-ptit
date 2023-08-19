#include<stdio.h>

int main(){
	 long long A[100];
	 int n;
	 scanf("%d", &n);
	 A[0]= 0, A[1]= 1;
	 for(int i =2 ; i<= n ; i++){
	 	A[i]= A[i-2]+ A[i-1];
	 }
	 for(int i = 0 ; i< n ; i++){
	 	printf("%lld ", A[i]);
	 }
}

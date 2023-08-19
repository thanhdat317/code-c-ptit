#include<stdio.h>

int main(){
	int n,t;
	scanf("%d", &t);
	while(t-- ){
		long long n;
		scanf("%lld", &n);
		int A[20];
		int i =0;
		int check =0;
		while( n>0 ){
	   A[i]= n % 10;
		n= n /10;
		if( A[i] %2 ==1){
			check =1;
		}
		i++;
		}
	 if(check ==0){
	 	printf("YES\n");
	 }else{
	 	printf("NO\n");	
	}
}
	return 0;
}

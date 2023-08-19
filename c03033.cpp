#include<stdio.h>
#include<math.h>
void tachnt(int n){
	printf("%d = ",n);
	int count = 0;
	for(int i = 2; i<= sqrt(n); i++){
		if( n % i ==0){
			while( n % i ==0){
				count++;
				n /=i;
			}
			printf("%d^%d", i, count);
			if( n != 1) printf(" * ");
		}
	}
	if( n !=1) printf("%d^1",n );
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long n;
		scanf("%ld", &n);
		tachnt(n);
		printf("\n");
	}
}

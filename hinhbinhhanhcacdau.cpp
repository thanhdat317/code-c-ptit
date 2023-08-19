#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for( int i =1; i<= n; i++){
		for( int j =1; j<= n-i; j++){
			printf("~");
		}
		for( int j = 1; j<=2*n-1; j++){
			if( j >= n){
				printf("*");
			}
		}
		printf("\n");
	}
}

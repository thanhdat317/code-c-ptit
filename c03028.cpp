#include<stdio.h>

int gt(int n){
	int tich= 1;
	for(int i = 1 ; i<= n; i++){
		tich *= i;
	}
	return tich;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i< n; i++){
		for(int  j = 0 ; j<= i; j++){
			int pa = gt(i)/(gt(j)*gt(i-j));
			printf("%d ", pa);
		}
		printf("\n");
	}
}

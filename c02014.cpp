#include<stdio.h>
int min(int a, int b){
	if(a>b) return b;
	else return a;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i =1; i<= 2*n-1; i++){
		for(int j =1; j<=2*n-1; j++){
			int init = min(min(i-1,2*n-i-1),min(j-1,2*n-j-1));
			printf("%d",n-init);
		}
		printf("\n");
	}
}

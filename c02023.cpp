#include<stdio.h>
int max(int a, int b){
	if(a> b)return a;
	else return b;
}
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	for(int i =1; i<= a; i++){
		int init = max(b,a);
		for(int j =1; j <= b; j++){
			if(j < i){
				printf("%c",96+init--);
			}else{
				printf("%c",96+init);
			}
		}
		printf("\n");
	}
}

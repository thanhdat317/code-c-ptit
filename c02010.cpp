#include<stdio.h>

int min( int a, int b){
	if(a>b) return b;
	else return a;
}
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	for(int i =1; i<= a; i++){
		printf("%d",i);
		for(int j =1; j< b; j++){
		   if(j<= b-i){
		   	printf("%d",i+j);
		   }else{
		   	int init = min( i-1, b-1);
		   	while(j<b){
		   		printf("%d", init--);
		   		++j;
			   }
		   }
		}
		printf("\n");
	}
	return 0;
}

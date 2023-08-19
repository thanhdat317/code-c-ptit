#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d",&a, &b);
	if(a >= b){
	for(int i = a; i>=1; i--){
		int init =i;
		for(int j =1 ; j<= b; j++){
			if(j< i){
				printf("%d", init--);
			}else{
				printf("%d",init++);
			}
		}
		printf("\n");
	}
   }else{
	for(int i = 1; i<=a; i++){
		int init =b-i+1;
		for(int j =1 ; j<= b; j++){
			if(j<= b-i){
				printf("%d", init--);
			}else{
				printf("%d",init++);
			}
		}
		printf("\n");
}
}
}

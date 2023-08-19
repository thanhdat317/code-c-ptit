#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 1; i<= a; i++){
		int init =i;
		for(int j =1 ; j<= b; j++){
			if(i==1){
				printf("%d",j);
			} else if(j <i){
				printf("%d",init--);
			}else{
				printf("%d",init++);
			}	
			}
		printf("\n");
	}
	
	
}

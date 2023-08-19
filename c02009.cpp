#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i =1; i <= a; i++){
		int init = i;
		for(int j = 1; j<= b; j++){
			if(j<= b-i){
				printf("%d",init++);
			}else{
				int count =i-1;
				while(j<= b){
					printf("%d",count--);
					j++;
				}
			}
		}
		printf("\n");
	}
	return 0;
}

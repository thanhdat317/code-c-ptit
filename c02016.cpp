#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=1; i<= n; i++){
		int init ;
		if(i % 2==1) init =1;
		else init =2;
		for(int j =1; j<=i; j++){
			if(i % 2 ==1){
				printf("%d",init);
				init+=2;
			}else{
				printf("%d",init);
				init+=2;
			}
		}
		printf("\n");
	}
}

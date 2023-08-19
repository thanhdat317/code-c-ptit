#include<stdio.h>
int min(int a,int b){
	if(a>b) return b;
	else return a;
}
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	for(int i =1 ; i <= a; i++){
		int count =i;
		for(int j = 1; j <= b; j++){
			if(j <= b-i+1){
				printf("%c",64+count++);
			}else{
				int init = min(i-1, b);
				while(j<=b){
					printf("%c",64+init--);
					j++;
				}
				
			}
		}
		printf("\n");
	}
}

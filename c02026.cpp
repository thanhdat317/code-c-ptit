#include<stdio.h>
int min(int a, int b){
	if(a>b) return b;
	else return a;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    for(int i = a ; i >=1 ;i--){
    	int init =min(i,b);
    	for(int j =1; j<=b; j++){
    		if(j<= b-i){
    			printf("%c",64+init++);
			}else{
				printf("%c",64+init);
			}
		}
		printf("\n");
	}
}

#include<stdio.h>
int min(int a, int b){
	if(a>b) return b;
	else return a;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    for(int i = 1 ; i <= a;i++){
    	int init =min(i,b);
    	for(int j =1; j<=b; j++){
    		if(j<= b-i){
    			printf("%c",63+init++);
			}else{
				printf("%c",63+init);
			}
		}
		printf("\n");
	}
}

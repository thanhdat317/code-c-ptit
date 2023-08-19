#include<stdio.h>

int main(){
	int n, demsole= 0, demsochan =0;
	scanf("%d",&n);
	while( n != 0){
	 if( n % 2 ==1){
	 	demsole++;
	 }else{ 
	 demsochan++;
	 }
	 n = n/10;
	}
	printf("%d %d",demsole,demsochan);
	return 0;
}

#include<stdio.h>

int main(){
	int n , t;
	scanf("%d", &t);
	while( t--){
		scanf("%d", &n);
		 int demsochan= 0,demsole= 0;
		while(n != 0){
		if( n % 2==0){
			demsochan++;
		}else{
			demsole++;
		}	
		n = n /10;
	}
		printf("%d %d\n",demsole,demsochan);
	
}
	return 0;
}

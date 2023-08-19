#include<stdio.h>
#include<math.h>
int main(){
	long t,n;
	scanf("%ld", &t);
	while(  t--){
	 scanf("%ld", &n) ;
	 int count = 0;
	 for( int i = 1 ; i<= sqrt(n); i++){
	 	if( n % i == 0){
	 		if(i %2 ==0){ 
	 		count ++;
	 	}
	 		if( i != n/i && (n/i) %2 ==0){
	 			count++;
			 }
			 }
			 
		 }
	 printf("%d\n",count);
}
	}
	



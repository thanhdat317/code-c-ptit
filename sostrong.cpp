 #include<stdio.h>
  int gt( int n){
  	int gt =1;
  	for( int i = 1; i <= n; i++){
  		gt *= i;
	  }
	  return gt;
  }
  int tonggiaithua(int n){
  	int sum = 0, a ;
  	while( n > 0){
  		a = n % 10;
  		sum += gt( a);
  		n = n / 10;
	  }
	  return sum ;
  }
  int main(){
  	int n ;
  	scanf("%d", &n);
  	if( n== tonggiaithua(n)){
  		printf("1");
	  }else{
	  	printf("0");
	  }
	  return 0;
  }

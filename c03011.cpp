#include<stdio.h>
int gt(long n){
	long long tich  =1;
	for(long i= 1; i<= n; i++){
		tich*=i;
	}
	return tich;
}
int strong(long n){
	long long k = 0, t;
	long long tmp_n = n;
	while( n > 0){
	    t = n %10;
	    k += gt(t);
		n /=10;
	}
	if(tmp_n == k){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	long  a , b;
	scanf("%ld %ld", &a, &b);
	if( b >a){
	for(long i = a; i<= b; i++){
		if(strong(i)){
			printf("%d ", i);
		}
}
}else{
	for(long i = b; i<= a; i++){
		if(strong(i)){
			printf("%d ", i);

}
}
}
}


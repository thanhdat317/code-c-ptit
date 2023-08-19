#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n < 2){
		return 0;
	}else{
		for(int i = 2; i<= sqrt(n); i++){
			if(n % i ==0){
				return 0;
			}
		}
		return 1;
	}
}
int fibo(int n){
	int sum = 0, t;
	while(n > 0){
		t = n %10;
		sum += t;
		n /=10;
	}
	
	long long A[100];
	A[0]= 0;
	A[1]= 1;
	for(int i = 2; i<= 93; i++){
		A[i]= A[i-1]+ A[i-2];
		if(sum== A[i]){
			return 1;
			break;
		}
	}
	return 0;
}
int main(){
	int a, b;
	scanf("%d%d",&a,&b);
	if(a> b){
		for(int i = b; i<= a; i++){
			if(nt(i)==1 && fibo(i)==1){
				printf("%d ", i);
			}
		}
	}else{
		for(int i = a; i<= b; i++){
			if(nt(i) && fibo(i)){
				printf("%d ", i);
			}
		}
	}

}

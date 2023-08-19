#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n < 2){
		return 0;
	}else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i ==0){
				return 0;
			}
		}
		return 1;
	}
}
int check(int n){
	int dem = 0, t;
	if(nt(n)){
	while(n > 0){
		t = n %10;
		n /=10;
		if(nt(t)==0){
			return 0;
			break;
		}
	}
	return 1;
}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	int a,b, dem= 0;
	scanf("%d %d", &a , &b);
	for(int i = a; i<= b; i++){
		if(check(i)){
			dem++;
		}
	}
	printf("%d\n",dem);
}
}

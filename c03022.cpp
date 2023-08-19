#include<stdio.h>
#include<math.h>

int nt(int n){
	for(int i = 2; i<=sqrt(n); i++){
		if(n %i == 0){
			return 0;
		}
	}
	return n > 1;
}
int tongcs(int n){
	int sum =0;
	while(n != 0){
		sum+= n%10;
		n/= 10;
	}
	if(sum %5==0){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int cnt =0;
	for(int i = 0 ; i< n ; i++){
		if(tongcs(i)==1 &&nt(i) != 0){
			printf("%d ",i);
			++cnt;
		}
	}
	printf("\n");
	printf("%d",cnt);
}

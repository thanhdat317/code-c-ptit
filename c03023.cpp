#include<stdio.h>
#include<math.h>
#define ll long long
int tn(int n){
	int tmp = n, res =0;
	while(n != 0){
		res = res *10 + n%10;
		n/=10;
	}
	if(res==tmp){
		return 1;
	}else{
		return 0;
	}
}
int check(int n){
	while(n != 0){
		int t = n %10;
		if(t ==9){
			return 0;
		}
		n/=10;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int cnt =0;
	for(int i = 2 ; i< n ; i++){
		if(tn(i)==1 &&check(i)==1){
			printf("%d ",i);
			cnt++;
		}
	}
	printf("\n");
	printf("%d",cnt);
}


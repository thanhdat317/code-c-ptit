#include<math.h>
#include<stdio.h>

int nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i==0){
			return 0;
		}
	}
	return n>1;
}
int tongcs(int n){
	int sum = 0;
	while(n != 0){
		sum+= n %10;
		n/=10;
	}
	if(nt(sum)){
		return 1;
	}
	return 0;
}
int chuso(int n){
	while(n != 0){
		int t = n %10;
		if(t !=2 && t !=3 && t!=5 && t !=7){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for(int i = a; i<=b ; i++){
			if(nt(i) && tongcs(i) && chuso(i)==1){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}


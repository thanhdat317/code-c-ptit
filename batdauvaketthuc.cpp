#include<stdio.h>

int main(){
int n,t,x,y;
scanf("%d",&t);
while(t--){
	scanf("%d",&n);
	x=n%10;
	while(n>=10){
		n=n/10;
		y=n;
	}
	if(x==y){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}
}

#include<stdio.h>

int main(){
	int n,t,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("\n");
		i =2;
		while(n > 1){
			if(n % i == 0){
				printf("%d ",i);
				n = n/i;
			}else{
				i++;
			}
}
}
}

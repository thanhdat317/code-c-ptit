#include<stdio.h>

int main(){
	int n,k,cnt =0;
	scanf("%d %d",&n,&k);
	for(int i = 2; i<= n; i++){
		int temp = i;
		while(temp %2==0){
			cnt++;
			temp/=2;
		}
	}
	if(cnt>=k){
		printf("Yes");
	}else{
		printf("No");
	}
}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char c[]){
	int demc= 0, deml =0, res = strlen(c);
	for(int i = 0 ; i<strlen(c); i++){
		if((c[i]-'0') %2==0){
			demc++;
		}else{
			deml++;
		}
	}
	if(demc > deml&& res %2==0|| deml > demc&& res % 2==1){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char c[1005];
		scanf("%s",c);
		int oke =1;
		for(int i = 0 ; i< strlen(c); i++){
			if(c[0]==0|| !isdigit(c[i])){
				printf("INVALID\n");
				oke =-1;
				break;
			}
		}
		if(oke != -1){
		if(check(c)==1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
}

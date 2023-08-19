#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	int cnt[10]={0};
	char c[1000];
	scanf("%s",c);
	int check =1;
	for(int i = 0 ; i<strlen(c); i++){
		if( c[0]=='0'||! isdigit(c[i])){
			printf("INVALID\n");
			check = -1;
		     break;
		}
			cnt[c[i]-'0'] = 1;
		}
		if(check != -1){
	for(int i = 0 ; i< 10;i++){
		if(cnt[i]==0){
			check =0;
		}
	}
	if(check ==1){
		printf("YES\n");
	}else if(check ==0){
		printf("NO\n");
	}
	}
}
}

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	int cnt[256] ={0} ;
	while(t--){
		char c[1000];
		gets(c);
		for(int i = 0 ; i<strlen(c); i++){
			cnt[c[i]]++;
		}
		for(int i = 0 ; i<strlen(c); i++){
			if(cnt[c[i]] != 0){
				printf("%c%d",c[i],cnt[c[i]]);
				cnt[c[i]] = 0;
			}
		}
		printf("\n");
	}
}

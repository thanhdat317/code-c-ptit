#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int cnt = 1;
		for(int i = 0 ; i< strlen(c)-1; i++){
			if(c[i]==' ' && c[i+1] !=' '){
				++cnt;
			}
		}
		printf("%d\n",cnt);
	}
}

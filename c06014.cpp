#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void ch(char c[]){
	c[0]=toupper(c[0]);
	for(int i = 1; i<strlen(c); i++){
		c[i]= tolower(c[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1005];
		gets(c);
		char *token = strtok(c," ");
		while(token != NULL){
			ch(token);
			printf("%s",token);
			token = strtok(NULL," ");
			if(token != NULL){
				printf(" ");
			}
		}
		printf("\n");
	}
}

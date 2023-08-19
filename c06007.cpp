#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char a[1005];
	char b[100];
	gets(a); gets(b);
	char *token = strtok(a," ");
	while(token != NULL){
		if(strcmp(token,b) != 0){
			printf("%s ",token);
		}
		token = strtok(NULL," ");
		}
	}

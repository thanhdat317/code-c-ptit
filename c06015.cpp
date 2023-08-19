#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void ch(char c[]){
	c[0] = toupper(c[0]);
	for(int i = 1 ; i< strlen(c); i++){
		c[i]= tolower(c[i]);
	}
}
void hoa(char c[]){
	for(int i = 0 ; i<strlen(c); i++){
		c[i] = toupper(c[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		int n =0;
		char a[100][100];
		char *token = strtok(c," ");
		while(token != NULL){
			ch(token);
			strcpy(a[n],token);
			n++;
			token = strtok(NULL," ");
		}
		for(int i = 1; i< n; i++){
			printf("%s",a[i]);
			if(i != n-1){
				printf(" ");
			}else{
				printf(",");
			}
		}
		hoa(a[0]);
		printf(" %s",a[0]);
		printf("\n");
	}
}

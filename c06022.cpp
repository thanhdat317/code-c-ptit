#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int sosanh(char a[], char b[]){
	int n1= strlen(a);
    int n2= strlen(b);
	if(n1!=n2){
		return 0;
	}
	for(int i =0 ; i< n1; i++){
		if(tolower(a[i]) != tolower(b[i])){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	for(int k = 1; k<=t; k++){
		char a[1002];
		char b[100];
		gets(a);
		gets(b);
		printf("Test %d: ",k);
		char *token = strtok(a," ");
		while(token != NULL){
			if(sosanh(token,b)==0){
				printf("%s ",token);
			}
			token = strtok(NULL," ");
		}
		printf("\n");
	}
}

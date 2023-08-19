#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct word{
	char name[100];
	int fre;
};
typedef struct word word;
word a[100000];// luu tu cua xau c;
int sl = 0;
int findPos(char c[]){
	for(int i = 0 ; i<sl; i++){
		if(strcmp(a[i].name,c)==0){
			return i;
		}
	}
	return -1;
}
int main(){
	char c[10000];
	gets(c);
	for(int i = 0 ; i<strlen(c); i++){
		c[i]=tolower(c[i]);
	}
	char *token =strtok(c," ");
	while(token != NULL){
	int pos = findPos(token);
	if(pos ==-1){
		strcpy(a[sl].name,token);
		a[sl].fre =1;
		sl++;
	}else{
		a[pos].fre++;
	}
	token = strtok(NULL," ");
}
for(int i = 0 ; i<sl; i++){
	printf("%s %d\n",a[i].name,a[i].fre);
}
}

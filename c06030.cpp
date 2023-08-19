#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct word{
	char name[100];
	int fre;
};
typedef struct word word;
word a[10000];
int n =0;
int findPos(char c[]){
	for(int i = 0 ; i < n; i++){
		if(strcmp(a[i].name,c)==0){
			return i;
		}
	}
	return -1;
}
int main(){
	char tmp[1005];
	while(scanf("%s",tmp) != -1){
		int pos = findPos(tmp);
		if(pos ==-1){
			strcpy(a[n].name,tmp);
			a[n].fre = 1;
			n++;
		}else{
			a[pos].fre +=1;
		}
	}
	int max = 0;
	for(int i = 0 ; i<n ; i++){
		if(strlen(a[i].name)>=max){
			max = strlen(a[i].name);
		}
	}
	for(int i = 0; i < n; i++){
		if(strlen(a[i].name)==max){
			printf("%s %d %d\n",a[i].name,max,a[i].fre);
		}
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char c[1000];
	scanf("%s",c);
	int x = strlen(c);
	if(x %2 !=0){
		printf("0");
		return 0;
	}else{
		for(int i = 0 ; i< x; i++){
			if(c[i]=='(') c[i]=')';
			if(c[i]=='[') c[i]=']';
			if(c[i]=='{') c[i]='}';
			// do no theo cap nen neu doi xung thi tat ca phai cung ban 1 ki tu
		}
	}
	int check =1;
	for(int i =0; i<x/2; i++){
		if(c[i] != c[x-1-i]){
			check =0;
		}
	}
	if(check==1){
		printf("1");
	}else{
		printf("0");
	}
}

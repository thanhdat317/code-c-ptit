#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char c[1000];
	gets(c);
	char a[1000][100];
	int n =0;
	int cnt[1001];
	// dung cnt nhu 1 mang danh dau cac tu da xuat hien truoc trong mang
	for(int i = 0 ; i<1001; i++){
		cnt[i] = 1;
	}
	char *token = strtok(c," ");
	while(token != NULL){
		strcpy(a[n],token);
		++n;
		token = strtok(NULL," ");
	}
	for(int i = 0 ; i<n -1; i++){
		for(int j = i+1; j< n ; j++){
			if(strcmp(a[i],a[j])==0){
				cnt[j]=0;
			}
		}
	}
	for(int i =0 ; i< n; i++){
		if(cnt[i]){
			printf("%s ",a[i]);
		}
	}
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void tach(char c[], char a[][100], int *n){
	char *token = strtok(c," ");
	while(token != NULL){
		strcpy(a[*n],token);
		(*n)++;
		token =strtok(NULL," ");
	}
}
int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return strcmp(x,y);
}
int main(){
	
	char s1[1005], s2[1003];
	gets(s1);
	gets(s2);
	char a[100][100];
	char b[100][100];
	int n = 0, m = 0;
	tach(s1,a,&n);
	tach(s2,b,&m);
	qsort(a,n, sizeof(a[0]),cmp);
	qsort(b,m,sizeof(b[0]),cmp);
	for(int i = 0; i< n; i++){
		while(i<n && strcmp(a[i],a[i+1])==0){
			i++;
		}
		int check =1;
		for(int j = 0 ; j<m ; j++){
			if(strcmp(a[i],b[j])==0){
				check = 0;
			}
		}
		if(check == 1 ){
			printf("%s ",a[i]);
		}
}
}

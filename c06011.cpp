#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int tongcs(char c[]){
	int sum =0;
	for(int i = 0 ; i< strlen(c); i++){
		if(isdigit(c[i])){
			sum+=c[i]-'0';
		}
	}
	return sum;
}
int tn(char c[]){
	int l =0, r= strlen(c)-1;
	while(l<=r){
		if(c[l] != c[r])
			return 0;
	    l++;r--;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
	char c[1000];
	gets(c);
	if(tn(c) && c[0]=='8'&& c[strlen(c)-1]=='8' && tongcs(c)%10==0){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}
}

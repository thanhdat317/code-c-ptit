#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int tn(char c[]){
	int l =0, r= strlen(c)-1;
	while(l<=r){
		if(c[l] != c[r])
			return 0;
		if(c[l] %2==1)
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
	if(tn(c)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}
}


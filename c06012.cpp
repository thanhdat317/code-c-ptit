#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int nt(int n){
	for(int i = 2; i <= sqrt(n);i++){
	if(n % i ==0){
		return 0;
	}
}
return n>1;
}
int tn(char c[]){
	int l =0, r= strlen(c)-1;
	while(l<=r){
		if(c[l] != c[r])
			return 0;
		if(nt(c[l]-'0')==0)
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


#include<stdio.h>
#include<string.h>
 
void solve(char c[]){
	for(int i =0 ; i< strlen(c); i++){
		if(c[i]=='0' || c[i]=='1'|| c[i]=='8'|| c[i]=='9'){
			if(c[i]=='8' || c[i]=='9'){
				c[i]='0';
			}
		}else{
			printf("INVALID\n"); return;
		}
	}
	int pos =0;
	while(pos < strlen(c) && c[pos]=='0')++pos;
	if(pos == strlen(c)) {
		printf("INVALID\n");
	}else{
		for(int i =pos; i< strlen(c); i++){
			printf("%c",c[i]);
		}
		printf("\n");
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
			char c[100];
			scanf("%s", c);
			solve(c);
	}
	return 0;
}

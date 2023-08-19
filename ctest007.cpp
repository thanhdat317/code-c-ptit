#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char c[]){
	for(int i = 0 ; i< strlen(c); i++){
		if(c[i] == '3'|| c[i] == '4' || c[i] == '5'|| c[i]=='6'|| c[i]=='7'|| c[i]=='8'|| c[i]=='9'){
				return 0;
			}
		}
		return 1;
	}
int main(){
	int t; 
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[100];
		scanf("%s",c);
		if(check(c)==1){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
}
}


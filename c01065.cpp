#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	scanf("%s",c);
	int cnt[10]={0};//luu so lan xuat hien cua chu so i
	for(int i =0; i<strlen(c); i++){
		if(c[i]=='2'|| c[i]== '3'|| c[i]=='5'|| c[i]=='7'){
			cnt[c[i]-'0']++;
		}
	}
	for(int i =0; i<strlen(c); i++){
		if((c[i]=='2'|| c[i]== '3'|| c[i]=='5'|| c[i]=='7') && cnt[c[i]-'0'] != 0){
			printf("%c %d\n",c[i],cnt[c[i]-'0']);
		}
	}
	return 0;
}

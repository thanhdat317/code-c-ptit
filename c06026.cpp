#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct word{
	char data[100];
	int fre;
};
typedef struct word word;
word a[1005];
int  sl =0;
int findPos(char c[]){
	for(int i = 0 ; i<sl; i++){
		if(strcmp(a[i].data,c)==0){
			return i;
		}
	}
	return -1;
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
	char tmp[1005];
	while(scanf("%s",tmp) != -1){
		if(tn(tmp)==1){
			int pos = findPos(tmp);
			if(pos ==-1){
				strcpy(a[sl].data,tmp);
				a[sl].fre =1;
				sl++;
			}else{
				a[pos].fre++;
			}
		}
}
	int max =0;// luu phan tu;
	for(int i = 0 ; i<sl; i++){
		if(strlen(a[i].data) >= max){
			max = strlen(a[i].data);
		}
	}
	for(int i = 0 ; i<sl; i++){
		if(strlen(a[i].data) == max){
			printf("%s %d\n",a[i].data,a[i].fre);
		}
	}
}


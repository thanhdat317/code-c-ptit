#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
struct pokemon{
 	char name[100];
 	int can, co, cnt;
 };
typedef struct pokemon pokemon;

int main(){
	int n, max, sum =0;
	scanf("%d", &n);
	pokemon a[n];
	for(int i = 0 ; i< n ; i++){
		getchar();
		gets(a[i].name);
		scanf("%d %d",&a[i].can, &a[i].co);
		a[i].cnt =0;// dem so luong tien hoa cua pokemon
		while(a[i].can<= a[i].co){
			a[i].co-= a[i].can;
			a[i].co+=2;
			a[i].cnt++;
		}
		sum+= a[i].cnt;
	}
	printf("%d\n",sum);
	for(int i = 0 ; i< n ; i++){
		if(a[i].cnt>=max){
			max = a[i].cnt;
		}
	}
	for(int i = 0 ; i< n ; i++){
		if(a[i].cnt==max){
			printf("%s\n",a[i].name);
		}
	}
}
	
